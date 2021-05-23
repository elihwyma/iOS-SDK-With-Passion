/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSMutableDictionary, NSString, PKContact, PKPaymentToken, PKShippingMethod;

@interface PKPayment : NSObject <Swift>

{
    PKPaymentToken *_token;
    PKContact *_billingContact;
    PKContact *_shippingContact;
    PKShippingMethod *_shippingMethod;
    NSData *_credential;
    NSMutableDictionary *_authKitAuthenticationResults;
    long long _biometricAuthorizationAttempts;
    NSString *_installmentAuthorizationToken;
}

@property (retain, nonatomic) PKContact *billingContact;
@property (retain, nonatomic) PKContact *shippingContact;
@property (retain, nonatomic) PKPaymentToken *token;
@property (retain, nonatomic) PKShippingMethod *shippingMethod;
@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) NSMutableDictionary *authKitAuthenticationResults;
@property (nonatomic) long long biometricAuthorizationAttempts;
@property (copy, nonatomic) NSString *installmentAuthorizationToken;
@property (nonatomic, readonly) const void *billingAddress;
@property (nonatomic, readonly) const void *shippingAddress;

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentWithProtobuf:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithToken:(id)arg1;
- (id)protobuf;

@end
