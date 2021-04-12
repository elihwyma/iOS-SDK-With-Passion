//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKContinuityPaymentServiceExportedInterface-Protocol.h>

@class NSArray, NSLock, PKXPCService;
@protocol OS_dispatch_queue, PKContinuityPaymentServiceDelegate;

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface>
{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSLock *_remoteDeviceLock;
    NSArray *_remoteDevices;
    id <PKContinuityPaymentServiceDelegate> _delegate;
}

+ (id)sharedService;
@property(nonatomic) __weak id <PKContinuityPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (void)promptDetailsForVirtualCard:(id)arg1 showNotification:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) NSArray *remoteDevices; // @synthesize remoteDevices=_remoteDevices;
- (BOOL)canMakePaymentsWithRemoteDevices;
- (BOOL)hasRemoteDevices;
- (void)cancelRemotePaymentRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(CGSize)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)updatePaymentDevices;
- (void)noteAccountDeleted;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectProxy;
- (id)init;

@end

