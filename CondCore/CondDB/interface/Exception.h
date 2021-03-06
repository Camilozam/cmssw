#ifndef CondCore_CondDB_Exception_h
#define CondCore_CondDB_Exception_h

#include "FWCore/Utilities/interface/Exception.h"

namespace cond {

  namespace persistency {

    /// Base exception class for the object to relational access
    class Exception : public cms::Exception {
    public:
      /// Constructor
      explicit Exception(const std::string& message);
      /// Constructor
      Exception(const std::string& message, const std::string& methodName);
      /// Destructor
      ~Exception() throw() override {}
    };

    void throwException [[noreturn]] (const std::string& message, const std::string& methodName);

  }  // namespace persistency

  typedef persistency::Exception Exception;

  void throwException [[noreturn]] (const std::string& message, const std::string& methodName);

}  // namespace cond

#endif
