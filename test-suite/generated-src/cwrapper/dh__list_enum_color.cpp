// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "enum_usage_record.hpp"

#include "color.hpp"
#include "dh__color.hpp"
#include "dh__enum_usage_record.hpp"
#include "dh__list_enum_color.hpp"
#include "dh__map_enum_color_enum_color.hpp"
#include "dh__set_enum_color.hpp"
#include <experimental/optional>

static void(*s_py_callback_list_enum_color___delete)(DjinniObjectHandle *);
void list_enum_color_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_enum_color___delete = ptr;
}

void list_enum_color___delete(DjinniObjectHandle * drh) {
    s_py_callback_list_enum_color___delete(drh);
}
void optional_list_enum_color___delete(DjinniOptionalObjectHandle *  drh) {
    s_py_callback_list_enum_color___delete((DjinniObjectHandle *) drh);
}
static int ( * s_py_callback_list_enum_color__get_elem)(DjinniObjectHandle *, size_t);

void list_enum_color_add_callback__get_elem(int( * ptr)(DjinniObjectHandle *, size_t)) {
    s_py_callback_list_enum_color__get_elem = ptr;
}

static size_t ( * s_py_callback_list_enum_color__get_size)(DjinniObjectHandle *);

void list_enum_color_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_py_callback_list_enum_color__get_size = ptr;
}

static DjinniObjectHandle * ( * s_py_callback_list_enum_color__python_create)();

void list_enum_color_add_callback__python_create(DjinniObjectHandle *( * ptr)()) {
    s_py_callback_list_enum_color__python_create = ptr;
}

static void ( * s_py_callback_list_enum_color__python_add)(DjinniObjectHandle *, int);

void list_enum_color_add_callback__python_add(void( * ptr)(DjinniObjectHandle *, int)) {
    s_py_callback_list_enum_color__python_add = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniListEnumColor::fromCpp(const std::vector<::testsuite::color> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_py_callback_list_enum_color__python_create(), & list_enum_color___delete);
    size_t size = dc.size();
    for (int i = 0; i < size; i++) {
        s_py_callback_list_enum_color__python_add(_handle.get(), int32_from_enum_color(dc[i]));
    }

    return _handle;
}

std::vector<::testsuite::color> DjinniListEnumColor::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::vector<::testsuite::color>_ret;
    size_t size = s_py_callback_list_enum_color__get_size(dh.get());
    _ret.reserve(size);

    for (int i = 0; i < size; i++) {
        _ret.push_back(static_cast<::testsuite::color>(s_py_callback_list_enum_color__get_elem(dh.get(), i)));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniListEnumColor::fromCpp(std::experimental::optional<std::vector<::testsuite::color>> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniListEnumColor::fromCpp(std::move(* dc)), optional_list_enum_color___delete);
}

std::experimental::optional<std::vector<::testsuite::color>>DjinniListEnumColor::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::experimental::optional<std::vector<::testsuite::color>>(DjinniListEnumColor::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), list_enum_color___delete)));
    }
    return std::experimental::nullopt;
}
