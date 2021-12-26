


def genSubset(R, N, subset):
    if R == N:
        print(subset)
    else:
        genSubset(R + 1, N , subset)
        subset.append(R)
        genSubset(R + 1, N, subset)
        subset.pop()

genSubset(0, 3, [])