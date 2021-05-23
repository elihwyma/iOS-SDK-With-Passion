/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSDate, NSMutableArray, NSString, SSURLBag, SSVBarrierOperationQueue, SSVFairPlaySubscriptionController, SSVPlaybackLeaseConfiguration, SSVPlaybackLeaseRequest, SSVRefreshSubscriptionRequest;

@protocol OS_dispatch_queue, OS_dispatch_source, SSVPlaybackLeaseDelegate;

@interface SSVPlaybackLease : NSObject

{
    NSMutableArray *_assetOperations;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id <SSVPlaybackLeaseDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    unsigned long long _kdMovieIdentifier;
    SSVPlaybackLeaseRequest *_lastKDLeaseRequest;
    int _leaseDidEndNotificationToken;
    NSDate *_leaseExpirationDate;
    long long _leaseType;
    SSVRefreshSubscriptionRequest *_offlineSlotRequest;
    SSVBarrierOperationQueue *_operationQueue;
    _Bool _refreshesAutomatically;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSURLBag *_urlBag;
}

@property (weak) id <SSVPlaybackLeaseDelegate> delegate;
@property _Bool refreshesAutomatically;
@property (copy) NSData *certificateData;
@property (copy) NSString *certificateURLBagKey;

- (id)init;
- (void)dealloc;
- (id)initWithURLBag:(id)arg1;
- (void)refreshLeaseWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_initSSVPlaybackLease;
- (id)initWithURLBag:(id)arg1 leaseType:(long long)arg2;
- (id)_addOperationWithRequest:(id)arg1 configurationURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_endLease;
- (void)getCertificateDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_startRefreshTimerIfNecessary;
- (void)_cancelRefreshTimer;
- (void)_updateWithLeaseResponseError:(id)arg1;
- (void)_updateForLeaseResponse:(id)arg1 error:(id)arg2;
- (void)_fireRefreshTimer;
- (_Bool)_shouldEndLeaseForError:(id)arg1 returningEndReasonType:(unsigned long long *)arg2;
- (void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)arg1;
- (id)initWithLeaseConfiguration:(id)arg1;
- (void)beginLeaseWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelAllAssetRequests;
- (void)endLease;
- (void)getAssetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)preheatLeaseRequestsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateWithExternalLeaseResponseError:(id)arg1;

@end
