#ifndef CPP_REFRESHER_COMMON_H
#define CPP_REFRESHER_COMMON_H

static auto Identity = [](auto a) { return a; };

template <typename Y>
Y apply(Y bar) {
    return bar;
}

template <class A>
A apply2(A bar) {
    return bar;
}

#endif  // CPP_REFRESHER_COMMON_H
