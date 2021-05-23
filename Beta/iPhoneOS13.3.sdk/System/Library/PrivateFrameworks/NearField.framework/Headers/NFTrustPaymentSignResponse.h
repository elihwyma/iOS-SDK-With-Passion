/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFTrustObject.h>

@class NFECommercePaymentResponse, NFTrustSignResponse;

@interface NFTrustPaymentSignResponse : NFTrustObject

{
    NFTrustSignResponse *_signResponse;
    NFECommercePaymentResponse *_paymentResponse;
}

@property (retain, nonatomic) NFTrustSignResponse *signResponse;
@property (retain, nonatomic) NFECommercePaymentResponse *paymentResponse;

+ (_Bool)supportsSecureCoding;
+ (id)paymentSignResponseWithSignResponse:(id)arg1 paymentResponse:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
