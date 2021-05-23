/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, TBPersistenceRemoteStoreServer;

@interface TBPersistenceManager : NSObject

{
    NSManagedObjectContext *_persistenceContext;
    NSPersistentStoreCoordinator *_persistenceCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    TBPersistenceRemoteStoreServer *_remoteStoreServer;
}

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *persistenceContext;
@property (retain, nonatomic) TBPersistenceRemoteStoreServer *remoteStoreServer;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistenceCoordinator;

+ (_Bool)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2;

- (id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2;

@end
