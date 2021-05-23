/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject

{
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (void)dealloc;
- (id)description;
- (id)userInfo;
- (CDStruct_4c969caf)auditToken;
- (void)setUserInfo:(id)arg1;
- (id)entitlements;
- (id)cache;
- (id)persistentStoreCoordinator;
- (id)managedObjectContext;
- (_Bool)_allowCoreDataFutures;
- (id)initWithConnectionInfo:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)notificationManager;
- (void)setNotificationManager:(id)arg1;

@end
