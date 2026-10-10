-- =======================================================
-- Exercise 3: Department Salary & Payroll Summary
-- Description: Joins salary and department details to find
--              headcount, average salary, and total payroll
--              spend per department.
-- =======================================================

SELECT 
    b.department_name,
    COUNT(a.employee_id) AS department_employee,
    ROUND(AVG(a.salary), 2) AS department_average_salary,
    SUM(a.salary) AS total_salary
FROM employee_salary a
JOIN parks_departments b	
    ON a.dept_id = b.department_id
WHERE a.dept_id IS NOT NULL
GROUP BY b.department_name
ORDER BY total_salary DESC;
