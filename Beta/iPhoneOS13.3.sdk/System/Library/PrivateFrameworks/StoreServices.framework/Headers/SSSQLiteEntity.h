/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSSQLiteDatabase;

@interface SSSQLiteEntity : NSObject

{
    SSSQLiteDatabase *_database;
    long long _persistentID;
}

@property (nonatomic, readonly) SSSQLiteDatabase *database;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) _Bool existsInDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)joinClauseForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (Class)memoryEntityClass;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 database:(id)arg4;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;

- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)getValues:(id *)arg1 forProperties:(const id *)arg2 count:(unsigned long long)arg3;
- (_Bool)setValuesWithDictionary:(id)arg1;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (_Bool)deleteFromDatabase;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;
- (id)initWithPersistentID:(long long)arg1 inDatabase:(id)arg2;
- (id)copyValuesForClientProperties:(id)arg1;
- (id)copyXPCEncodedValuesForClientProperties:(id)arg1;

@end
