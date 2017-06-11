/**
 * \class libAlainPeters
 *
 * \brief 
 *
 * \note 
 *
 * \author Adrien Carteron
 *
 * \version 0.1 
 *
 * \date sam. juin 10 17:17:42 CEST 2017 
 *
 * Contact: acarteron@openmailbox.org
 *
 * Created on: sam. juin 10 17:17:42 CEST 2017
 *
 *
 */

#ifndef LIBALAINPETERS_HH
#define LIBALAINPETERS_HH

#include <iostream>


#include <vector>
#include <Poco/Dynamic/Var.h>
#include <Poco/JSON/JSON.h>
#include <Poco/JSON/Parser.h>
#include <Poco/JSON/Array.h>

class libAlainPeters{

private:
  Poco::JSON::Object::Ptr all=new Poco::JSON::Object();
  std::vector<std::string> collection_to_vector(std::string);
  std::vector<std::string> rule_list_to_vector(std::string);
  std::vector<std::string> stream_list_to_vector(std::string);
  Poco::JSON::Array::Ptr getPriorities();
public:
  /** \brief Void constructor
   * 
   * add desc 
   * 
   */
  libAlainPeters();
  /** \brief Destructor
   * 
   * add desc
   *
   */
  ~libAlainPeters();
  
  void do_what_you_do(std::string);
  std::string getDailyReport_as_string();
  Poco::JSON::Object::Ptr getDailyReport_as_json_object();

};

#endif // LIBALAINPETERS_HH