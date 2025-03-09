# EECS348 Lab 7

This is a template for Lab 7 with continuous integration testing set up in a
[GitHub Actions workflow](https://docs.github.com/en/actions/about-github-actions/understanding-github-actions).
When you push code to this repository, it will automatically be compiled and ran
through a set of test cases, and the results will be reported back to you. This
should give you an opportunity to verify that your code is compiling and
behaving as expected before you submit it.

## Viewing the workflow report

If you click on the red X that currently appears to the right of the latest
commit message in this repo and click on details, you will be taken to a log
of the workflow that ran for that commit. This will report any errors during
compilation of your project, and if compilation succeeded, all passing or
failing test cases. From here you will be able to get a better idea of what is
working in your code and what you still need to fix before you submit.

The test cases for this lab are contained in the folder named `tests/tests.cpp`.
These are written with [GoogleTest](https://github.com/google/googletest). The
test cases included in this repository at the start won't be enough to
guarantee your code works for our input file, so it may be a good idea to write
some of your own following the documentation at that link.

You shouldn't have to modify any of the files named `CMakeLists.txt`. These are
used for building your project for the Github Action and running the tests.

## To begin

Create a [fork](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo) of this repository through GitHub then clone it locally and start working.

### Starting files

You begin with the source file `main.c` with your `main` function already
defined in it, and the header files `report.h` and `football.h`.

For the first
part of the lab, you will need to make a `report.c` file and write any
functions there and write the function signatures in `report.h`. For the second
part of the lab, you will
need to make a `football.c` file and implement the function signatures in
`football.h`. For this part, do not modify `football.h`.

You will also have to write your own Makefile to build your code. The file is
included already but starts out blank.
