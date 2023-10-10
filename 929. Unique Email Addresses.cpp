class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
         int num = 0;
        set<string> Unique_emails;
        if(emails.empty())
            return 0;
        for(int i = 0;i<emails.size();i++){
            size_t pos = emails[i].find('@');
            string local = emails[i].substr(0,pos);
            string domain = emails[i].substr(pos);
            local.erase(remove(local.begin(), local.end(), '.'),local.end());
            pos = local.find('+');
            local = local.substr(0,pos);
             emails[i] = local + domain;
            if(Unique_emails.find(emails[i]) == Unique_emails.end()){
                num++;
                Unique_emails.insert(emails[i]);
            }
        }
        return num;
    }
};