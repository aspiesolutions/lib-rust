use std::{ffi::{CString, CStr, c_char}, convert::TryFrom};
#[no_mangle]
pub extern "C" fn  hello<'a>() -> *mut c_char {
    let rust_string = aspiesolutions_lib_rust::hello();
    let cstring = CString::new(rust_string).unwrap();
    cstring.into_raw()
    // let rust_str = rust_string.into_boxed_str();
    // leak the boxed str, we then have to free it after we are done
}
#[no_mangle]
pub unsafe extern "C" fn free_cstring(s: * mut c_char) {
    drop(CString::from_raw(s));
}