from unittest import TestCase
from calci.app.calculator import CalcMachine

class CalculatorTest(TestCase):

	def setUp(self):
		self.calc = CalcMachine()
	def test_calculator(self):
		self.assertEqual(5,self.calc.div(20,4))

if __name__ == "__main__":
	unittest.main()
