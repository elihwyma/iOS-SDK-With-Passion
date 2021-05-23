/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PLManagedObjectContextList;

@protocol OS_dispatch_queue;

@interface PLCoreDataChangeMerger : NSObject

{
    PLManagedObjectContextList *_contextsToReceiveNotifications;
    NSObject<OS_dispatch_queue> *_mergeChangesQueue;
    _Bool _isMergingCoalescedSaveNotification;
    NSDictionary *_allDidSaveObjectIDsUserInfo;
}

@property (nonatomic) _Bool isMergingCoalescedSaveNotification;
@property (copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;

- (id)init;
- (void)refreshAllObjects;
- (id)allContexts;
- (void)handleUnknownMergeEvent;
- (id)allContextsNotIdenticalTo:(id)arg1;
- (void)registerToReceiveCoreDataChanges:(id)arg1;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
