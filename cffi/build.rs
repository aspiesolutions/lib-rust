// use std::fs::File;
use std::{path::{PathBuf}};
fn main() -> Result<(),Box<dyn std::error::Error>> {
    let bindings = cbindgen::generate(std::env::var("CARGO_MANIFEST_DIR")?)?;
    let out_dir = PathBuf::from(std::env::var("OUT_DIR")?).canonicalize()?;
    let out_name = std::env::var("CARGO_PKG_NAME")?;
    let success = bindings.write_to_file(out_dir.join(out_name + ".h"));

    Ok(())
}