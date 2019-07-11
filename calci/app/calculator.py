class CalcMachine(object):
	def div(self,a,b):
		return a/b

	def div(self, a, b):
		if isinstance(a,int) and isinstance(b,int):
			return a/b

		else:
			raise Exception('Invalid arguments')