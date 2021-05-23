/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKXPCService;

@interface PKInAppPaymentService : NSObject

{
    PKXPCService *_remoteService;
}

- (id)init;
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_remoteObjectProxy;
- (void)cardsAvailableForAMPWithCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)secureElementStatus:(unsigned long long *)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 orientation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)secureElementStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentHardwareStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)arg1 merchantSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)cardsAvailableForAMPWithCountryCode:(id)arg1;

@end
