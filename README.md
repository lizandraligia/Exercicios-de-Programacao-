# Exercicios-de-Programacao-
Algumas questões de programação. 

1. Replacing characters in place:
Given an array of characters, write a method to replace all the spaces with “&32”.
You may assume that the array has sufficient slots at the end to hold the additional
characters and that you are given the “true” length of the array. (Note: Please
perform this operation in the same array provided and without any String
methods).

[Solution] (Questões/Questao1.c)

2. Check words with jumbled letters:
Our brain can read texts even if letters are jumbled, like the following sentence: “Yuo
cna porbalby raed tihs esaliy desptie teh msispeillgns.” Given two words, write a
method to decide if one is a partial-permutation of the other. Consider a
partial-permutation only if:
- The first letter hasn’t changed place
- If the word has more than 3 letters, up to 2/3 of the letters have changed
place

[Solution] (Questões/Questao2.c)

3. Check words with typos:
There are three types of typos that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to
check if they are one typo (or zero typos) away.

[Solution] (Questões/Questao3.c)

4. [Android] Search on a list:
Write an application with one activity that shows a list of items and a search box. The
user expects that the search returns a result even if word typed is partially permuted
or it has one typo (like explained on previous problems), but not both.

5. Remove duplicates on email thread:
When different email clients are used on the same thread, the discussion gets messy
because old messages are included again and get duplicated. Given the first node of
an email thread (represented by a singly unsorted linked list of messages), write a
function that removes duplicated messages from the list. (Note: You only have
access to the head node of the linked list, not the entire list.)

[Solution] (Questões/Questao5.java)

6. [Android] Email processor service:
Write an application with one service (no activities) that receive requests from other
apps with an email thread (as a linked-list), applies the previous algorithm and
returns a cleaner version of the same email thread. Concurrent requests should be
queued.

7. Linked List Intersection:
If two requests on the queue have linked lists that intersect (like the example below),
the previous service could be improved to process only the difference between them.
Write a method that receives two singly linked lists and returns the intersecting
node of the two lists (if exists). Note that the intersection is defined by reference, not
value. (No need to change the previous answer).

[Solution] (Questões/Questao7.java)
