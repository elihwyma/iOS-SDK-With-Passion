/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, NSString, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;

@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
}

@property (nonatomic, readonly) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (nonatomic, readonly) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 forceRegister:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceRegister:(_Bool)arg2;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceRegister:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)notePasscodeChanged;

@end
