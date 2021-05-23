/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, NSAttributedString, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSAttributedString *formattedAddressString;
@property (nonatomic, readonly) CNContact *shippingAddress;
@property (nonatomic, readonly) NSString *shippingType;
@property (nonatomic, readonly) _Bool isShippingEditable;

+ (long long)dataType;

- (id)errors;
- (_Bool)isValidWithError:(id *)arg1;
- (id)_shippingName;

@end
