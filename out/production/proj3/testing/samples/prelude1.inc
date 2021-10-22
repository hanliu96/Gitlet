# Standard commands and definitions courtesy of the staff
> init
<<<
# An arbitrary line of text (works even with ?s)
D ARBLINE "[^\n]*(?=\n|\Z)"
# Zero or more arbitrary full lines of text.
D ARBLINES "(?:(?:.|\n)*(?:\n|\Z)|\A|\Z)"
# A status log header RE.  Captures the commit id in its sole group.
D DATE "Date: \w\w\w \w\w\w \d+ \d\d:\d\d:\d\d \d\d\d\d [-+]\d\d\d\d"
D COMMIT_HEAD "commit ([a-f0-9]+)[ \t]*\n${DATE}"
# A full log entry.  Captures the entry. Assume logs messages don't contain
# ===
D COMMIT_LOG "(===[ ]*\ncommit [a-f0-9]+[ ]*\n${DATE}[ ]*\n(?:.|\n)*?(?=\Z|\n===))"
D COMMIT_LOG01 "(===[ ]*\ncommit [a-f0-9]+[ ]*\n${ARBLINE}\n${DATE})"
