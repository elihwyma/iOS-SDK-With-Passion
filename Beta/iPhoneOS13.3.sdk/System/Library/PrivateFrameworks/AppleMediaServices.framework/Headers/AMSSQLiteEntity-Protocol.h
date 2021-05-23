/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/Swift-Protocol.h>

@protocol AMSSQLiteEntity <Swift>

+ (unsigned short)joinClauseForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)databaseTable;
+ (unsigned short)foreignDatabaseTablesToDelete;
+ (unsigned short)foreignKeyColumnForTable: /* Error: Ran out of types for this method. */;
+ (unsigned short)disambiguatedSQLForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)foreignDatabaseTableForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)foreignDatabaseColumnForProperty: /* Error: Ran out of types for this method. */;

- (unsigned short)objectForKeyedSubscript: /* Error: Ran out of types for this method. */;
- (unsigned short)setObject:forKeyedSubscript: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValuesWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)getValuesForProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteFromDatabase;

@end
