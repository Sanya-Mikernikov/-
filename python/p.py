n = int(input())

results = []
for _ in range(n):
    score = input().strip()
    results.append(score)
alina_streak = 0
polina_streak = 0
winners = {}
for result in results:
    alina_score, polina_score = map(int, result.split())
    
    if alina_score > polina_score:
        alina_streak += 1
        polina_streak = 0
    elif polina_score > alina_score:
        polina_streak += 1
        alina_streak = 0
    else:
        alina_streak = 0
        polina_streak = 0
    if alina_streak >= 3:
        winners.add("Алина")
    if polina_streak >= 3:
        winners.add("Полина")
if winners:
    print("\n".join(sorted(winners)))