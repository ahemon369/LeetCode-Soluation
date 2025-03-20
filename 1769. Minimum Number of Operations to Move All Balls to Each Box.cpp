class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer(boxes.length(), 0);

        // left to right pass
        int ballsOnLeft = 0;
        int moves = 0;
        for(int i = 0; i < answer.size(); i++){
            moves+= ballsOnLeft;
            if(boxes[i] == '1'){
                ballsOnLeft++;
            }
            answer[i] = moves;
        }

        int ballsOnRight = 0;
        moves = 0;

        for(int i = answer.size() - 1; i > -1; i--){
            moves+= ballsOnRight;
            if(boxes[i] == '1'){
                ballsOnRight++;
            }
            answer[i] += moves;
        }

        return answer;
    }
};
