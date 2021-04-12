//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAddPaymentPassController.h>

#import <NanoPassKit/NPKAddPaymentPassControllerClientProtocol-Protocol.h>
#import <NanoPassKit/PKXPCServiceDelegate-Protocol.h>

@class PKAddPaymentPassRequestConfiguration, PKXPCService;

@interface NPKAddPaymentPassController : PKAddPaymentPassController <NPKAddPaymentPassControllerClientProtocol, PKXPCServiceDelegate>
{
    BOOL _didFinishCallbackSent;
    PKAddPaymentPassRequestConfiguration *_configuration;
    PKXPCService *_remoteService;
}

+ (BOOL)canAddPaymentPass;
@property(nonatomic) BOOL didFinishCallbackSent; // @synthesize didFinishCallbackSent=_didFinishCallbackSent;
@property(retain, nonatomic) PKXPCService *remoteService; // @synthesize remoteService=_remoteService;
@property(retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)_sendDidFinishWithPass:(id)arg1 error:(id)arg2;
- (id)_remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)dismissWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)presentWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;

@end

