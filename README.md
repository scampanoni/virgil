# VIRGIL: Very sImple thRead pool desiGned with the easy Integration goaL in mind

This is a header-only C++ library that implements a simple thread pool using the modern C++ language.
VIRGIL's design aims for an easy integreation with other C++ code.

## Motivation

[We](http://users.cs.northwestern.edu/~simonec/Team.html) have designed VIRGIL becaused of our needs to integrate a thread pool within the code generated by [our compilers](http://users.cs.northwestern.edu/~simonec/Software.html), which are described by [our papers](http://users.cs.northwestern.edu/~simonec/Research.html).
The complexity of a compiler leads to the need of simplifying drastically the integration with external manually-written code.
This motivated us to design VIRGIL.
We hope it will be useful for other people as well.


## Logo
![alt text](https://raw.githubusercontent.com/scampanoni/threadpool/master/figs/Virgil.jpg)

Virgil is the name of our cat we have taken home from the [Gifford cat shelter](http://www.giffordcatshelter.org) just before moving from Boston to Chicago.


## Credits
VIRGIL has been inspired by several projects.
The main ones are [A Platform-Independent Thread Pool Using C++14](http://roar11.com/2016/01/a-platform-independent-thread-pool-using-c14/) and [A Fast Lock-Free Queue for C++](http://moodycamel.com/blog/2013/a-fast-lock-free-queue-for-c++).


## Running the tests

There are two set of tests: the ones for testing the whole thread pool, and the ones that only tests queues that are within VIRGIL.
For the former, go to tests/pool and run `make`.
For the latter, go to tests/queue and run `make`.


## License