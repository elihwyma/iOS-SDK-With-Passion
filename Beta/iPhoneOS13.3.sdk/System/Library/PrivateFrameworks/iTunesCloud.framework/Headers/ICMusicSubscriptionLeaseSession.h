/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, NSDate;

@protocol ICMusicSubscriptionLeaseSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ICMusicSubscriptionLeaseSession : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_source> *_automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _isPerformingAutomaticRefresh;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    long long _pendingLeaseAcquisitionRevisionID;
    _Bool _delegatedLeaseSession;
    ICStoreRequestContext *_requestContext;
    id <ICMusicSubscriptionLeaseSessionDelegate> _delegate;
    NSDate *_leaseExpirationDate;
}

@property (weak, nonatomic, readonly) id <ICMusicSubscriptionLeaseSessionDelegate> delegate;
@property (copy, nonatomic, readonly) NSDate *leaseExpirationDate;
@property (nonatomic, readonly, getter=isDelegatedLeaseSession) _Bool delegatedLeaseSession;
@property (copy, nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (copy, nonatomic, readonly) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (nonatomic, readonly, getter=isAutomaticallyRefreshingLease) _Bool automaticallyRefreshingLease;

+ (id)_sharedOperationQueue;

- (void)dealloc;
- (id)description;
- (id)performPlaybackRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (void)_updateAutomaticRefreshProperties;
- (id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onQueue_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)_performAutomaticRefresh;
- (id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(_Bool)arg2 delegate:(id)arg3 leaseStatus:(id)arg4;
- (void)reloadFairPlayKeyStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)_handleRemoteServerDidBecomeLikelyReachable;
- (void)_receivedUserInteractionEvent;
- (void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;

@end
