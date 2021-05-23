/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface MPStoreSocialServiceController : NSObject

{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_transientStates;
}

+ (id)_internalErrorForHTTPResponseCode:(long long)arg1;

- (id)init;
- (void)followPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestFollowPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelFollowRequestOnPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unblockPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeFollower:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)transientFollowStateForPerson:(id)arg1;
- (void)acceptAllFollowRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)acceptFollowRequestFromPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)declineFollowRequestFromPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (void)_handleTransientStateForPersonDidChangeNotification:(id)arg1;
- (void)_performTransientFollowState:(long long)arg1 onPerson:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performTransientFollowPendingRequestState:(long long)arg1 onPerson:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_transientStateForPerson:(id)arg1 shouldCreate:(_Bool)arg2;
- (void)_populateTransientStatesSnapshot:(id)arg1;
- (void)_notifyTransientStatesDidChangeWithSnapshot:(id)arg1;
- (void)_transientStatesDidChange;
- (void)_queue_transientStatesDidChange;
- (id)_newOperationForRemovingFollower:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
