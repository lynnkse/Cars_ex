#ifndef __CAR_H__
#define __CAR_H__

class Car_t
{
	public:
		enum Name_t {NOT_YET_SET, BUS, PRIVATE};
		enum Type_t {NOT_SET, AUTOMATIC, STANDARD};
	public:
		bool operator<(const Car_t& _car) const; //compare cars by capacity
		bool Compare(const Car_t& _car) const; //return true if two cars are of the same type, false otherwise
		Name_t GetName() const;
		Type_t GetType() const;
		int GetCapacity() const;
	protected:
		Car_t(); 
		Car_t(int _capacity); //create car with given capacity and default rest of values
		Car_t(const Car_t& _car); //copy constructor
		~Car_t();
		void SetType(Type_t _type);
		void SetName(Name_t _name);
		static void IncrementID(); //sets next available car ID to be given to the next car
	private:
		Type_t m_type;
		int m_capacity;
		const int m_id;
		Name_t m_name;
		void operator=(const Car_t& _car); //should not be used anywhere in program
		
		static int m_nextID;
};

#endif //__CAR_H__
