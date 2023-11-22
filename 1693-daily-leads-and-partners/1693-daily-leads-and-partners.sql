select 
    to_char(date_id, 'yyyy-mm-dd') "date_id",
    make_name, 
    count(distinct lead_id) "unique_leads",
    count(distinct partner_id) "unique_partners" 

from 
    DailySales 
group by 
    make_name, to_char(date_id, 'yyyy-mm-dd')



    

