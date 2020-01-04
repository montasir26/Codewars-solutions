def solution(string):
    inputstr=string
    result=''
    
    for i in range(len(inputstr)-1,-1,-1):
        result=result+inputstr[i]
      
    return result
    pass
