#include <algorithm>
#include <stdexcept>
#include <vector>
#include <list>

using std::domain_error; using std::sort; using std::vector; using std::list;

double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0)
		throw domain_error("median of an empty vector");

	sort(vec.begin(), vec.end());

	vec_sz mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

//double medianList(list<double> vec)
//{
//	typedef list<double>::size_type vec_sz;
//
//	vec_sz size = vec.size();
//	if (size == 0)
//		throw domain_error("median of an empty vector");
//
//	vec.sort();
//
//	vec_sz mid = size / 2;
//
//	list<double>::iterator iter = vec.begin();
//
//	return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
//}