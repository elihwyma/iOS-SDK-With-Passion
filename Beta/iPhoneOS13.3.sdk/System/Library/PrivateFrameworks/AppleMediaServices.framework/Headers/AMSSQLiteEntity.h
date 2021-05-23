/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteEntity : NSObject

{
    AMSSQLiteConnection *_connection;
    long long _persistentID;
}

@property (nonatomic, readonly) AMSSQLiteConnection *connection;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) _Bool existsInDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (Class)memoryEntityClass;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)setValuesWithDictionary:(id)arg1;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;
- (id)getValuesForProperties:(id)arg1;
- (_Bool)deleteFromDatabase;
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;

@end
