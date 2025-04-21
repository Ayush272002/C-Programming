# C Programming Tutorial Repository

This repository is a curated collection of C programming examples designed to help beginners grasp fundamental concepts and progressively tackle more advanced topics. Each file focuses on a specific aspect of C programming, providing clear and concise examples.

## 📁 Repository Structure
The repository is organized into individual `.c` files, each demonstrating a particular concept.

- **[01_hello_world.c](01_hello_world.c)**: Basic "Hello, World!" program  
- **[02_add.c](02_add.c)**: Simple addition of two numbers  
- **[03_static_global.c](03_static_global.c)**: Demonstrates static and global variables  
- **[04_basic_pointer.c](04_basic_pointer.c)**: Introduction to pointers  
- **[05_swap_two_vars_using_ptrs.c](05_swap_two_vars_using_ptrs.c)**: Swapping variables using pointers  
- **[06_double_pointers.c](06_double_pointers.c)**: Working with double pointers  
- **[07_malloc_free.c](07_malloc_free.c)**: Dynamic memory allocation using `malloc` and `free`  
- **[08_strings.c](08_strings.c)**: Basic string operations  
- **[09_string_fgets.c](09_string_fgets.c)**: Reading strings using `fgets`  
- **[10_string_double_ptr.c](10_string_double_ptr.c)**: Strings with double pointers  
- **[11_struct.c](11_struct.c)**: Defining and using structures  
- **[12_struct_ptrs.c](12_struct_ptrs.c)**: Pointers to structures  
- **[13_pass_by_value.c](13_pass_by_value.c)**: Function arguments passed by value  
- **[14_pass_by_ref.c](14_pass_by_ref.c)**: Function arguments passed by reference  
- **[15_writing_to_a_file.c](15_writing_to_a_file.c)**: Writing data to a file  
- **[16_reading_from_a_file.c](16_reading_from_a_file.c)**: Reading data from a file  
- **[17_reading_and_writing_to_a_file.c](17_reading_and_writing_to_a_file.c)**: Combined file I/O operations  
- **[18_error_handling_and_eof.c](18_error_handling_and_eof.c)**: Error handling and detecting EOF  
- **[19_basic_function_pointer.c](19_basic_function_pointer.c)**: Introduction to function pointers  
- **[20_function_ptr_w_params.c](20_function_ptr_w_params.c)**: Function pointers with parameters  
- **[21_passing_func_ptr_to_a_func.c](21_passing_func_ptr_to_a_func.c)**: Passing function pointers to functions  
- **[22_array_of_func_ptrs.c](22_array_of_func_ptrs.c)**: Array of function pointers  
- **[23_command_line_args.c](23_command_line_args.c)**: Demonstrates how to handle command-line arguments (`argc` and `argv`) in C programs  
- **[24_simple_thread.c](24_simple_thread.c)**: Introduces basic multithreading by creating and executing a simple thread using the `pthread` library  
- **[25_pass_data_to_thread.c](25_pass_data_to_thread.c)**: Shows how to pass data to a thread function using pointers, enabling threads to operate on specific data  
- **[26_multiple_threads_with_args.c](26_multiple_threads_with_args.c)**: Creates multiple threads, each receiving different arguments, illustrating concurrent execution with varied data  
- **[27_passing_structs_to_threads.c](27_passing_structs_to_threads.c)**: Demonstrates passing structures to threads, allowing complex data to be shared and manipulated within threads  
- **[28_using_mutex_for_sync.c](28_using_mutex_for_sync.c)**: Utilizes mutexes to synchronize threads, preventing race conditions when accessing shared resources  
- **[29_conditional_variable_adv_sync.c](29_conditional_variable_adv_sync.c)**: Employs condition variables alongside mutexes to manage complex thread synchronization scenarios  
- **[30_thread_detach.c](30_thread_detach.c)**: Explains how to detach threads, allowing them to run independently and reclaim resources upon completion  
- **[31_thread_pool.c](31_thread_pool.c)**: Implements a basic thread pool, managing a set of worker threads to execute tasks efficiently  
- **[32_basic_tcp_server.c](32_basic_tcp_server.c)**: Sets up a simple TCP server that listens for client connections and handles basic communication  
- **[33_basic_client.c](33_basic_client.c)**: Creates a TCP client that connects to a server, sends messages, and receives responses  

## 🛠️ Getting Started

To compile and run any of the programs:

1. **Clone the repository:**

   ```bash
   git clone https://github.com/Ayush272002/C-Programming.git
   cd C-Programming
   ```


2. **Compile a program:**

   ```bash
   gcc filename.c -o output
   ```


3. **Run the executable:**

   ```bash
   ./output
   ```


*Replace `filename.c` with the desired source file.*

## 🎯 Purpos

This repository serves as a hands-on guide fr:
- Understanding basic to advanced C programming conceps.
- Practicing file I/O operatios.
- Exploring pointers, structures, and dynamic memory allocatin.
- Learning about function pointers and their applicatios.

## 🤝 Contributig

Contributions are welcome! If you have examples or improvements to share, feel free to fork the repository and submit a pull requst.

## 📄 Licese

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for detils.