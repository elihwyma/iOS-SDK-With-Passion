/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class CDPDCircleStateObserver, NSArray;

@protocol CDPDCircleDelegate, CDPDCircleProxy, CDPStateUIProviderInternal, OS_dispatch_queue;

@interface CDPDCircleController : NSObject

{
    CDPDCircleStateObserver *_circleJoinObserver;
    NSObject<OS_dispatch_queue> *_requestSynchronizationQueue;
    NSObject<OS_dispatch_queue> *_retryQueue;
    unsigned long long _cliqueStatusRetryCount;
    NSArray *_retryIntervals;
    id <CDPStateUIProviderInternal> _uiProvider;
    NSObject<CDPDCircleDelegate> *_delegate;
    id <CDPDCircleProxy> _circleProxy;
}

@property (retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider;
@property (weak, nonatomic) NSObject<CDPDCircleDelegate> *delegate;
@property (retain, nonatomic) id <CDPDCircleProxy> circleProxy;

- (void)dealloc;
- (id)peerID;
- (unsigned long long)circleStatus;
- (void)joinCircleWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)synchronizeCircleViews;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;
- (void)applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg1;
- (void)cancelApplicationToJoinCircle;
- (void)prepareCircleStateForRecovery;
- (void)joinCircleIgnoringBackups:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_joinCircleIgnoringBackups:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_peerCount;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;
- (void)promptForCredentials:(CDUnknownBlockType)arg1;
- (_Bool)canRetryCliqueStatus;
- (long long)nextRetryInterval;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestToJoinWithRequestBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCircleIncludingCloudKitData:(_Bool)arg1 cloudKitResetReasonDescription:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(CDUnknownBlockType)arg1;

@end
