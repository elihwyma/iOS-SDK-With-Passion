/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKShippingMethod;

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (nonatomic, readonly) PKShippingMethod *shippingMethod;

+ (long long)dataType;

- (_Bool)isValidWithError:(id *)arg1;

@end
