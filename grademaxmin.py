#9 grades
def main():

    grades = []
    for i in range(5):
        while True:
            try:
                grade = float(input(f"Enter the grade for subject {i + 1}: "))
                if 0 <= grade <= 100:
                    grades.append(grade)
                    break
                else:
                    print("Please enter a grade between 0 and 100.")
            except ValueError:
                print("Invalid input. Please enter a number.")


    grades_tuple = tuple(grades)


    highest_grade = max(grades_tuple)
    lowest_grade = min(grades_tuple)
    average_grade = sum(grades_tuple) / len(grades_tuple)


    print(f"Grades: {grades_tuple}")
    print(f"Highest grade: {highest_grade}")
    print(f"Lowest grade: {lowest_grade}")
    print(f"Average grade: {average_grade:.2f}")

if __name__ == "__main__":
    main()