# Background color [First project]

This is my second project in this repository. In this case, I built a usual Random Quote Generator that is connected to an API endpoint database to generate this quotes.

## Learnings

I learned a lot of things while doing this project. In fact, at some point it was a completely pain because the database where the quotes are located was initially going to be a local JSON file.
I faced several issues with that approach. The most problematic one was I wasn't able to upload that JSON file to GitHub due the file weight was exceeding the limit weight file, which the repository permits me.
I tried to use Git Large Fils Storages extension (git-LFS), but didn't work anyway.

- **HTML learnings**
    1. I learned that the ```<script>``` tag should be at the end of the body element, just before the closing ```<html>``` tag, to avoid problems of execution.
    2. I learned how to make links that open the new webpage in a different tap by using the ```target: _black``` attribute.

- **CSS (Sass framework) learnings**
    1. I used the Sass framework to write easily my CSS.
    2. I learned a little bit more about flex elements and grid elements in this project.
    3. I used for first time pseudo-selectors:
        - ```:nth-child()```

- **JavaScript learnings**
    1. I used the ```fetch```API for first time.
        - Because of this, I'm learning about asynchronous JavaScript.
    2. I worked for first time with .json files.
    3. I learned the ```.innerHTML``` property.

- **Other learnings**
    1. Git doesn't support large files.
    2. JavaScript and node.js are different things.
    3. .json files cannot be read by .js files.

## Resources and references

This are the all the resources used to develop my learnings.

[1] *Web Dev Tutorials*. #3 of 25 Beginner Projects - HTML, CSS, & JavaScript - Random Quote Generator ( Responsive Design ). (March 21, 2021). Accessed Feb 08, 2023. [Online video]. Available: <https://youtu.be/hIjAGcMh3QA>

[2] *The Net Ninja*. Asynchronous JavaScript (2020 version). (Sep 25, 2020). Accessed Feb 08, 2023. [Online playlist]. Available: <https://youtube.com/playlist?list=PL4cUxeGkcC9jx2TTZk3IGWKSbtugYdrlu>

[3] Quotes source: GitHub (2023) lukePeavy/quotable. [Source]. Available: <https://github.com/lukePeavey/quotable>
