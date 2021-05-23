/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQuery : NSObject

{
    AMSSQLiteConnection *_connection;
    AMSSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) AMSSQLiteConnection *connection;
@property (readonly) AMSSQLiteQueryDescriptor *queryDescriptor;
@property (readonly) long long countOfEntities;

- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copySelectSQLWithProperties:(id)arg1;
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_newSelectSQLWithProperties:(id)arg1;
- (id)initOnConnection:(id)arg1 descriptor:(id)arg2;
- (id)copyEntityIdentifiers;
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;
- (_Bool)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;

@end
