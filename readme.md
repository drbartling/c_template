# C Template

Template for a simply embedded application written in C and tested with Catch2

## Goal

Create a C template for an embedded project.  It should work well with at least Windows and linux, and require minimal setup from the user of the template.

We can use a makefile to provide a minimal interface for building from the command line that can be used by both github actions and pre-commit

## Linux Builds
Builds are working with clang and gcc

## Windows Builds
1. Unable to use Catch2's main for testing:
	1. [Action Results](https://github.com/drbartling/c_template/actions/runs/5008442279/jobs/8976315135)
	2. Switched to use own main [(commit)](https://github.com/drbartling/c_template/commit/941188a24eb9a9197a7e36f0eea5ea2bef31c28a)
2. CTest not locating test executable
	1. While it finds the right folder, it looks like it doesn't get the extension

## Macos

1. Builds are failing for macos as well, but haven't looked into why
