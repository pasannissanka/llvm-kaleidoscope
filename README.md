# llvm-kaleidoscope
[llvm-kaleidoscope](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl1.html#tutorial-introduction)
A toy language built following llvm-kaleidoscope tutorial for self education.

***
## Notes



***

## Tutorial Introduction

This tutorial runs through the implementation of a simple language, showing how fun and easy it can be. 
This tutorial will get you up and started as well as help to build a framework you can extend to other languages. 
The code in this tutorial can also be used as a playground to hack on other LLVM specific things.
 
 
    1. **[Chapter #1](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl1.html#language): Introduction to the Kaleidoscope language, and the definition of its Lexer** 
      - This shows where we are going and the basic functionality that we want it to do. 
        In order to make this tutorial maximally understandable and hackable, we choose to implement everything in C++ instead of using lexer and parser generators.
        LLVM obviously works just fine with such tools, feel free to use one if you prefer.
    2. **[Chapter #2](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl2.html): Implementing a Parser and AST** 
      - With the lexer in place, we can talk about parsing techniques and basic AST construction. 
        This tutorial describes recursive descent parsing and operator precedence parsing. 
        Nothing in Chapters 1 or 2 is LLVM-specific, the code doesn’t even link in LLVM at this point. :)
    3. **[Chapter #3](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl3.html): Code generation to LLVM IR** 
      - With the AST ready, we can show off how easy generation of LLVM IR really is.
    4. **[Chapter #4](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl4.html): Adding JIT and Optimizer Support** 
      - Because a lot of people are interested in using LLVM as a JIT, we’ll dive right into it and show you the 3 lines it takes to add JIT support. 
        LLVM is also useful in many other ways, but this is one simple and “sexy” way to show off its power. :)
    5. **[Chapter #5](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl5.html): Extending the Language: Control Flow** 
      - With the language up and running, we show how to extend it with control flow operations (if/then/else and a ‘for’ loop). 
      This gives us a chance to talk about simple SSA construction and control flow.
    6. **[Chapter #6](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl6.html): Extending the Language: User-defined Operators** 
      - This is a silly but fun chapter that talks about extending the language to let the user program define their own arbitrary unary and binary operators 
        (with assignable precedence!). This lets us build a significant piece of the “language” as library routines.
    7. **[Chapter #7](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl7.html): Extending the Language: Mutable Variables** 
      - This chapter talks about adding user-defined local variables along with an assignment operator. 
        The interesting part about this is how easy and trivial it is to construct SSA form in LLVM: no, LLVM does not require your front-end to construct SSA form!
    8. **[Chapter #8](https://releases.llvm.org/3.6.2/docs/tutorial/LangImpl8.html): Conclusion and other useful LLVM tidbits** 
      - This chapter wraps up the series by talking about potential ways to extend the language, 
        but also includes a bunch of pointers to info about “special topics” like adding garbage collection support, exceptions, debugging, 
        support for “spaghetti stacks”, and a bunch of other tips and tricks.
