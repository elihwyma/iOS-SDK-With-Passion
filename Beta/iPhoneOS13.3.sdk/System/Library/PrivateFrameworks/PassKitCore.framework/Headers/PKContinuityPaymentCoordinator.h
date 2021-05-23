/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKContinuityPaymentService, PKRemotePaymentRequest;

@protocol OS_dispatch_queue, OS_dispatch_source, PKContinuityPaymentCoordinatorDelegate;

@interface PKContinuityPaymentCoordinator : NSObject <Swift>

{
    PKContinuityPaymentService *_continuityPaymentService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_deviceUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_deviceTotalUpdateTimeoutTimer;
    _Bool _isUpdatingDevices;
    PKRemotePaymentRequest *_currentRemotePaymentRequest;
    long long _messageSendCount;
    long long _messageSendCompleteCount;
    id <PKContinuityPaymentCoordinatorDelegate> _delegate;
    double _updatePaymentDeviceTimeout;
}

@property (weak, nonatomic) id <PKContinuityPaymentCoordinatorDelegate> delegate;
@property (nonatomic) double updatePaymentDeviceTimeout;
@property (nonatomic, readonly) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property (nonatomic, readonly, getter=isAwaitingReply) _Bool awaitingReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContinuityPaymentService:(id)arg1;
- (void)updatePaymentDevices;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPaymentClientUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRemotePaymentRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)_deviceUpdateTimerDidTimeout;
- (void)_deviceUpdateTotalTimerDidTimeout;
- (void)_resetRequest;
- (void)_queue_sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_send_didReceiveUpdatedPaymentDevice:(id)arg1;
- (void)_send_didReceivePayment:(id)arg1;
- (void)_send_didReceiveCancellation;
- (void)_send_didTimeoutUpdatePaymentDevices;
- (void)_send_didTimeoutTotalUpdatePaymentDevices;

@end
