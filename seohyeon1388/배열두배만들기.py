def solution(numbers):
    answer = numbers.copy()
    for i in range(len(numbers)):
        answer[i] = numbers[i]*2
        
    return answer