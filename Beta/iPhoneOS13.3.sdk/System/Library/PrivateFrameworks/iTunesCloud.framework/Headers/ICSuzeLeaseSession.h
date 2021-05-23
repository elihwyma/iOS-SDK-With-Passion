/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICFPLeaseSyncSession, ICSuzeLeaseSessionConfiguration, NSDate, NSOperationQueue;

@protocol ICSuzeLeaseSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ICSuzeLeaseSession : NSObject

{
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _isRunning;
    NSDate *_leaseExpirationDate;
    NSObject<OS_dispatch_source> *_leaseRenewTimer;
    ICFPLeaseSyncSession *_leaseSyncSession;
    NSOperationQueue *_operationQueue;
    ICSuzeLeaseSessionConfiguration *_configuration;
    id <ICSuzeLeaseSessionDelegate> _delegate;
}

@property (copy, nonatomic, readonly) ICSuzeLeaseSessionConfiguration *configuration;
@property (weak, nonatomic) id <ICSuzeLeaseSessionDelegate> delegate;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (void)_updateRenewalTimer;
- (id)_newSuzeLeaseRequestWithType:(long long)arg1 clientData:(id)arg2;
- (void)_updateRenewalTimerWithResponse:(id)arg1;
- (void)_renewLeaseTimerAction;
- (void)beginAutomaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (void)startLeaseSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopLeaseSessionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
