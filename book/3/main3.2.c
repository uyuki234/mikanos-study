EFI_FILE_PROTOCOL* kernel_file;
root_dir-Open(
    root_dir, &kernel_file, L"\\kernel.elf",
    EFI_FILE_
)