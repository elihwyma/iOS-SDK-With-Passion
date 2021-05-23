/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDSQLiteEntity <Swift>

+ (unsigned short)databaseName;
+ (unsigned short)indices;
+ (unsigned short)foreignKeys;
+ (unsigned short)databaseTable;
+ (unsigned short)disambiguatedSQLForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)isTemporary;
+ (unsigned short)checkConstraints;
+ (unsigned short)joinClausesForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)enumerateColumnsWithBlock: /* Error: Ran out of types for this method. */;
+ (unsigned short)createTableSQL;
+ (unsigned short)columnDefinitionsWithCount: /* Error: Ran out of types for this method. */;
+ (unsigned short)disambiguatedDatabaseTable;
+ (unsigned short)uniquedColumns;
+ (unsigned short)privateSubEntities;
+ (unsigned short)deleteStatementWithProperty:database: /* Error: Ran out of types for this method. */;
+ (unsigned short)tableAliases;
+ (unsigned short)entityClassForEnumeration;
+ (unsigned short)orderingTermForSortDescriptor: /* Error: Ran out of types for this method. */;
+ (unsigned short)entityForProperty: /* Error: Ran out of types for this method. */;
+ (unsigned short)allDatabaseColumnNames;

- (unsigned short)getValuesForProperties:database:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getValuesForProperties:database:error:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForProperty:database: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteFromDatabase:error: /* Error: Ran out of types for this method. */;
- (unsigned short)booleanForProperty:database: /* Error: Ran out of types for this method. */;
- (unsigned short)dateForProperty:database: /* Error: Ran out of types for this method. */;
- (unsigned short)numberForProperty:database: /* Error: Ran out of types for this method. */;
- (unsigned short)stringForProperty:database: /* Error: Ran out of types for this method. */;
- (unsigned short)UUIDForProperty:database: /* Error: Ran out of types for this method. */;
- (unsigned short)willDeleteFromDatabase: /* Error: Ran out of types for this method. */;

@end
