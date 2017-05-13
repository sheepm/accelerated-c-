//
// Created by Administrator on 2017/5/3 0003.
//

#ifndef CHAPTER11_VEC_H
#define CHAPTER11_VEC_H

#include <cstddef>
#include <memory>

template<class T>
class Vec {
public:
    typedef T *iterator;
    typedef const T *const_iterator;
    typedef size_t size_type;
    typedef T value_type;

    Vec(const Vec &v) { create(v.begin(), v.end()); };

    Vec() { create(); };

    explicit Vec(size_type n, const T &val = new T()) { create(n, val); };

    ~Vec() { uncreate(); }

    size_type size() const { return limit - data; };

    T &operator[](size_type i) { return data[i]; };

    const T &operator[](size_type i) const { return data[i]; };

    Vec<T> &operator=(const Vec &rhs) {
        if (&rhs != this) {
            uncreate();
            create(rhs.begin(), rhs.end());
        }
        return *this;
    };

    void push_back(const T &val) {
        if (avail == limit) {
            grow();
        }
        unchecked_append(val);
    };

    iterator begin() { return data; };

    iterator end() { return limit; };

    const_iterator begin() const { return data; };

    const_iterator end() const { return limit; };
private:
    iterator data;
    iterator limit;
    iterator avail;

    std::allocator<T> alloc;

    void create();

    void create(size_type, const T &);

    void create(const_iterator, const_iterator);

    void uncreate();

    void grow();

    void unchecked_append(const T &);
};

template<class T>
void Vec<T>::create() {
    data = avail = limit = 0;
}

template<class T>
void Vec<T>::create(Vec::size_type n, const T &val) {
    data = alloc.allocate(n);
    limit = avail = data + n;
    std::uninitialized_fill(data, limit, val);
}

template<class T>
void Vec<T>::create(Vec::const_iterator i, Vec::const_iterator j) {
    data = alloc.allocate(j - i);
    limit = avail = std::uninitialized_copy(i, j, data);
}

template<class T>
void Vec<T>::uncreate() {
    if (data) {
        iterator it = avail;
        while (it != data) {
            alloc.destroy(--it);
        }
        alloc.deallocate(data, limit - data);
    }
    data = limit = avail = 0;
}

template<class T>
void Vec<T>::grow() {
    size_type new_size = std::max(2 * (limit - data), ptrdiff_t(1));
    iterator new_data = alloc.allocate(new_size);
    iterator new_avail = std::uninitialized_copy(data, avail, new_data);
    uncreate();
    data = new_data;
    avail = new_avail;
    limit = data + new_size;
}

template<class T>
void Vec<T>::unchecked_append(const T &t) {
    alloc.construct(avail++, t);
};

#endif //CHAPTER11_VEC_H
