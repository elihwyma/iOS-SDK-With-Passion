/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/Swift-Protocol.h>

@protocol SSSQLiteEntity <Swift>

+ (unsigned short)joinClauseForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)databaseTable;
+ (unsigned short)foreignDatabaseTablesToDelete;
+ (unsigned short)foreignKeyColumnForTable: /* Error: Ran out of types for this method. */;
+ (unsigned short)disambiguatedSQLForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)foreignDatabaseTableForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)foreignDatabaseColumnForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)databasePropertyToSetClientProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)databaseValueForProperty:clientValue: /* Error: Ran out of types for this method. */;
+ (unsigned short)databasePropertyToGetClientProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)copyDatabaseDictionaryToSetClientDictionary: /* Error: Ran out of types for this method. */;

- (unsigned short)valueForProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)getValues:forProperties:count: /* Error: Ran out of types for this method. */;
- (unsigned short)setValuesWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteFromDatabase;
- (unsigned short)copyValuesForClientProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)copyXPCEncodedValuesForClientProperties: /* Error: Ran out of types for this method. */;

@end
