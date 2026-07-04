class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += str(len(s)) + "#" + s
        return res

    def decode(self, s: str) -> List[str]:
        i = 0
        newList = []

        while i < len(s):
            Num = ""

            # read length
            while s[i] != "#":
                Num += s[i]
                i += 1

            intNum = int(Num)
            offset = i + 1

            # read word
            word = ""
            for j in range(offset, offset + intNum):
                word += s[j]

            newList.append(word)

            # move pointer to next length
            i = offset + intNum

        return newList


#neetcodeloveyou