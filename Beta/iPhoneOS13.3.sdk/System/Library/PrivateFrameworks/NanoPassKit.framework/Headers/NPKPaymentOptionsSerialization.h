/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@interface NPKPaymentOptionsSerialization : NSObject

+ (id)_contactFromEncodedData:(id)arg1;
+ (id)_billingAddressDictionaryFromEncodedData:(id)arg1;
+ (void)_deleteAllDefaultBillingAddresses:(id)arg1;
+ (id)setTransactionDefaultsRequest;
+ (void)handleSetTransactionDefaultsRequest:(id)arg1;

@end
