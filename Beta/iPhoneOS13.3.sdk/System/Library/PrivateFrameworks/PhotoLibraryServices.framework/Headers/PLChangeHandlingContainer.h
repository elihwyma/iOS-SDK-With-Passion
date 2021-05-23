/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL, PLChangeNode, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor;

@protocol PLChangePublisher;

@interface PLChangeHandlingContainer : NSObject

{
    PLChangeNode *_changeNode;
    PLCoreDataChangeMerger *_changeMerger;
    id <PLChangePublisher> _changePublisher;
    PLPersistentHistoryChangeDistributor *_persistentHistoryChangeDistributor;
    NSURL *_libraryURL;
}

@property (copy, readonly) NSURL *libraryURL;
@property (nonatomic, readonly) _Bool isMergingCoalescedSaveNotification;
@property (copy, nonatomic, readonly) NSDictionary *allDidSaveObjectIDsUserInfo;

- (void)stop;
- (void)start;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)connectManagedObjectContext:(id)arg1;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)handleUnknownMergeEvent;
- (void)registerToReceiveCoreDataChanges:(id)arg1;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
- (id)initWithLibraryURL:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4;

@end
