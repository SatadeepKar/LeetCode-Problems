select MAX(salary) as SecondHighestSalary
from Employee
Where salary < (select MAX(salary) from Employee)