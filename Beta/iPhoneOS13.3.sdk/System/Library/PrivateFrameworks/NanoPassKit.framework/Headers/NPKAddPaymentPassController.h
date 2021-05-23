/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKAddPaymentPassController.h>

@class NSString, PKAddPaymentPassRequestConfiguration, PKXPCService;

@interface NPKAddPaymentPassController : PKAddPaymentPassController

{
    _Bool _didFinishCallbackSent;
    PKAddPaymentPassRequestConfiguration *_configuration;
    PKXPCService *_remoteService;
}

@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration;
@property (retain, nonatomic) PKXPCService *remoteService;
@property (nonatomic) _Bool didFinishCallbackSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canAddPaymentPass;

- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)_sendDidFinishWithPass:(id)arg1 error:(id)arg2;

@end
