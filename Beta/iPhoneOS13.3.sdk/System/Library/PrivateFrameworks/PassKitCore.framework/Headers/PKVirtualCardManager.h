/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKAccountService, PKInAppPaymentService;

@interface PKVirtualCardManager : NSObject

{
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}

- (id)init;
- (void)queryKeychainForVirtualCard:(CDUnknownBlockType)arg1;
- (void)activeVirtualCardsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)credentialsForVirtualCard:(id)arg1 authorization:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)urlToPassDetailsForVirtualCard:(id)arg1;
- (void)promptDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissDetailsForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
