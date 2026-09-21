# Write your MySQL query statement below
select e1.name as Employee
from Employee as e1 inner join Employee as e2 ON e2.id=e1.managerId
WHERE e1.salary > e2.salary;