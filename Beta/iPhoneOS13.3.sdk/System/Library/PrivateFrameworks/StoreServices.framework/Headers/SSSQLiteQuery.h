/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject

{
    SSSQLiteDatabase *_database;
    SSSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) SSSQLiteDatabase *database;
@property (readonly) SSSQLiteQueryDescriptor *queryDescriptor;
@property (readonly) long long countOfEntities;

- (void)dealloc;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)copyEntityIdentifiers;
- (_Bool)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsAndProperties:(const id *)arg1 count:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copySelectSQLWithProperties:(const id *)arg1 count:(unsigned long long)arg2;
- (id)_newSelectSQLWithProperties:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(const id *)arg2 count:(unsigned long long)arg3;

@end
