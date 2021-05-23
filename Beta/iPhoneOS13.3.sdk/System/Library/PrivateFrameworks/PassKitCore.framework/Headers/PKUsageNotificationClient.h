/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKXPCService;

@interface PKUsageNotificationClient : NSObject

{
    PKXPCService *_connection;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _paymentHandler;
}

- (id)init;
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3;
- (void)setPassUsageHandler:(CDUnknownBlockType)arg1;
- (void)setPaymentUsageHandler:(CDUnknownBlockType)arg1;

@end
