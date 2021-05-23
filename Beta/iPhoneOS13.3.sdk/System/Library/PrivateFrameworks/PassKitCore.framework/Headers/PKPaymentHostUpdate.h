/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class PKContact, PKPaymentMethod, PKShippingMethod;

@interface PKPaymentHostUpdate : NSObject <Swift>

{
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
    PKPaymentMethod *_paymentMethod;
}

@property (nonatomic, readonly) PKContact *shippingContact;
@property (nonatomic, readonly) PKShippingMethod *shippingMethod;
@property (nonatomic, readonly) PKPaymentMethod *paymentMethod;

+ (_Bool)supportsSecureCoding;
+ (id)paymentUpdateWithProtobuf:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;
- (id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3;

@end
