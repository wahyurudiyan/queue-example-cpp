#include <iostream>
#include "Queue/Queue.h"

int main() {
    Queue queue(10);

    queue.Push("{\"contacts\":[{\"profile\":{\"name\":\"Kerry Fisher\"},\"wa_id\":\"16315551234\"}],\"messages\":[{\"from\":\"16315551234\",\"id\":\"ABGGFlA5FpafAgo6tHcNmNjXmuSf\",\"timestamp\":\"1518694235\",\"text\":{\"body\":\"Hello this is Kerry\"},\"type\":\"text\"}]}");
    queue.Push("{\"contacts\":[{\"profile\":{\"name\":\"Andin Fisher\"},\"wa_id\":\"16315554567\"}],\"messages\":[{\"from\":\"16315551234\",\"id\":\"ABGGFlA5FpafAgo6tHcNmNjXmuSf\",\"timestamp\":\"1518694282\",\"text\":{\"body\":\"Hello this is Andin\"},\"type\":\"text\"}]}");
    string message = queue.Pop();
    cout << "JSON Message from Queue: "
         << message << endl;
}