/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSSaveChangesRequest, NSSet, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCSaveRequestContext : NSObject

{
    NSXPCStore *_store;
    NSSaveChangesRequest *_request;
    NSDictionary *_metadata;
    NSManagedObjectContext *_context;
    NSMutableDictionary *_changeCache;
    unsigned long long _interrupts;
    _Bool _forceUpdates;
}

@property (nonatomic, readonly) _Bool forceUpdates;
@property (nonatomic) unsigned long long interrupts;
@property (nonatomic, readonly) NSDictionary *changeCache;
@property (nonatomic, readonly) NSSet *rowsToDelete;

- (void)dealloc;
- (id)request;
- (id)managedObjectContext;
- (id)newEncodedSaveRequest;
- (id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(_Bool)arg4 context:(id)arg5;
- (void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3;
- (id)_cacheNodePropertiesFromObject:(id)arg1;
- (void)_addRowForInsertOrUpdate:(id)arg1;
- (id)_encodeObjectValues:(id)arg1 options:(unsigned long long)arg2;
- (id)_encodeObjectsForSave:(id)arg1 forDelete:(_Bool)arg2;
- (id)rowForID:(id)arg1;

@end
