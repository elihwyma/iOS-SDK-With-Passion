/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, NSTimer, NSXPCConnection, NSXPCListener, PKInAppPaymentService, PKPaymentAuthorizationCoordinatorExportedObject, PKPaymentRequest;

@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate;

@interface PKPaymentAuthorizationCoordinator : NSObject

{
    _Bool _didPresent;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSTimer *_timer;
    PKPaymentRequest *_paymentRequest;
    NSString *_hostIdentifier;
    PKPaymentAuthorizationCoordinatorExportedObject *_exportedObject;
    CDUnknownBlockType _presentationCompletionBlock;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCListener *_listener;
    double _connectionTimeout;
}

@property (nonatomic) _Bool didPresent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSString *hostIdentifier;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject;
@property (copy, nonatomic) CDUnknownBlockType presentationCompletionBlock;
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService;
@property (retain, nonatomic) NSXPCListener *listener;
@property (nonatomic) double connectionTimeout;
@property (weak, nonatomic) id <PKPaymentAuthorizationCoordinatorDelegate> delegate;
@property (weak, nonatomic, setter=_setPrivateDelegate:) id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canMakePayments;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 webDomain:(id)arg3;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1 webDomain:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithPaymentRequest:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)presentWithOrientation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeCallbackWithSuccess:(_Bool)arg1;
- (void)_viewServiceTimerFired:(id)arg1;

@end
