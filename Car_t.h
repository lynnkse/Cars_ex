#ifndef __CAR_H__
#define __CAR_H__

enum Name_t {NOT_YET_SET, BUS, PRIVATE};
enum Type_t {NOT_SET, AUTOMATIC, STANDARD};

class Car_t
{
	public:
		bool operator<(const Car_t& _car) const;
		bool Compare(const Car_t& _car) const;
		Name_t GetName() const;
		Type_t GetType() const;
		int GetCapacity() const;
	protected:
		Car_t();
		Car_t(int _capacity);
		Car_t(const Car_t& _car);
		~Car_t();
		void SetType(Type_t _type);
		void SetName(Name_t _name);
		static void IncrementID();
		void operator=(const Car_t& _car);
	private:
		Type_t m_type;
		int m_capacity;
		int m_id;
		Name_t m_name;
		
		static int m_nextID;
};

#endif //__CAR_H__
