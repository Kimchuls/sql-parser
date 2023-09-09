#ifndef SQLPARSER_SET_STATEMENT_H
#define SQLPARSER_SET_STATEMENT_H

#include "SQLStatement.h"

namespace hsql {

// Represents SQL Execute statements.
// Example: "EXECUTE ins_prep(100, "test", 2.3);"
struct SetStatement : SQLStatement {
  SetStatement(char* tableName, char* indexName, char* parameter, int value);
  ~SetStatement() override;

  char* tableName;
  char* indexName;
  char* parameterName;
  int value;
};

}  // namespace hsql

#endif
