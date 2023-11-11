select Users.name, nvl(sum(Rides.distance),0) as travelled_distance 
from Users left outer join Rides
on Users.id = Rides.user_id
group by Users.id, users.name
order by travelled_distance desc, users.name