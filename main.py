from thinkbayes2 import Pmf
class monty(Pmf):
    def __init__(self,hypos):
        Pmf.__init__(self)
        for hypo in hypos:
            self.Set(hypo,1)
        self.Normalize()
hypos='ABC'
pmf=monty(hypos)

data='B'
pmf.Update(data)

def Updaste(self, data):
    for hypo in self.Values():
        like=self.Likelihood(data,hypo)
        self.Mult(hypo,like)
    self.Normalize

def Likelihood(self,data,hypo):
    if hypo==data:
        return 0
    elif hypo=='A':
        return 0.5
    else:
        return 1

for hypo,prob in pmf.Item():
    print(hypo,prob)
