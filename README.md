

✨ <b>Institute Management System</b><br><br>
📚 1. Header Files & Structs
- #include<stdio.h> and #include<string.h> for I/O and string handling.
- Four structs:
- 👩‍🎓 student: name, class, section, roll no.
- 👨‍🏫 teacher: name, branch, class in-charge, mobile.
- 🧑‍💼 staff: name, designation, mobile.
- 🗣️ feedback: name, class, section, teacher, remark.

🏠 2. Main Menu Navigation
- Options:
- A – Registration
- B – Student Menu
- C – Teacher Menu

📝 3. Registration (Option A)
- Prompts for user type (student, teacher, staff).
- Saves info to corresponding text files.
- ❗ Mobile and roll numbers stored as int[] (🔄 can be optimized as string).

🎓 4. Student Options (Option B)
- 📊 CGPA Calculator – Calculates using user-input marks.
- 🗣️ Feedback Form – Stores teacher reviews ('G', 'A', 'B').
- 🔔 Check Updates – Reads updates from update.txt.

👩‍🏫 5. Teacher Options (Option C)
- 📝 Mark Attendance – Records present/absent status.
- 📢 Make an Update – Appends a message to update.txt.

⚠️ 6. Error Handling & File Ops
- Uses fopen, fprintf, fclose for file handling.
- Displays error messages for invalid input.
- 👀 Needs better file pointer null checks and consistent input methods.






