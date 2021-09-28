#include <iostream>
#include "Queue/Queue.h"

int main() {
    Queue queue(10);

    queue.Push("{\n"
               "  \"to\":[\n"
               "    {\n"
               "       \"unique_id\" : \"fyRcvYR8Sg\",\n"
               "       \"username\" : \"ahmadsyf80\",\n"
               "       \"fullname\" : \"Ahmad Syarifuddin\"\n"
               "    }  \n"
               "  ],\n"
               "  \"messages\":[\n"
               "    {\n"
               "      \"id\": \"Q8361nBDwr\",\n"
               "      \"type\":\"text\",\n"
               "      \"text\": {\n"
               "        \"body\":\"Hi, your vaccination schedule is Sept 28, 2021 at 9am. Location: GAIA Mall Pontianak.\"\n"
               "      }\n"
               "    }\n"
               "  ]\n"
               "}");

    queue.Push("{\n"
               "  \"to\":[\n"
               "    {\n"
               "       \"unique_id\" : \"TOiUwz8GVr\",\n"
               "       \"username\" : \"sshofwan90\",\n"
               "       \"fullname\" : \"Hidayatul Shofwan\"\n"
               "    }  \n"
               "  ],\n"
               "  \"messages\":[\n"
               "    {\n"
               "      \"id\": \"x0kU2vSEmI\",\n"
               "      \"type\":\"text\",\n"
               "      \"text\": {\n"
               "        \"body\":\"Hi, your vaccination schedule is Sept 29, 2021 at 9.30am. Location: MEGA Mall Pontianak.\"\n"
               "      }\n"
               "    }\n"
               "  ]\n"
               "}");
    queue.Get();
    string message = queue.Pop();
    cout << "JSON Message from Queue: "
         << message << endl;

    queue.Get();
}