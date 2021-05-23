/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSLock, PKXPCService;

@protocol OS_dispatch_queue, PKContinuityPaymentServiceDelegate;

@interface PKContinuityPaymentService : NSObject

{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSLock *_remoteDeviceLock;
    NSArray *_remoteDevices;
    id <PKContinuityPaymentServiceDelegate> _delegate;
}

@property (nonatomic, readonly) NSArray *remoteDevices;
@property (weak, nonatomic) id <PKContinuityPaymentServiceDelegate> delegate;

+ (id)sharedService;

- (id)init;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)noteAccountDeleted;
- (void)updatePaymentDevices;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRemoteDevices:(id)arg1;
- (void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasRemoteDevices;
- (_Bool)canMakePaymentsWithRemoteDevices;
- (void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)promptDetailsForVirtualCard:(id)arg1 showNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
