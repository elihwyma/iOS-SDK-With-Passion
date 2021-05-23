/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSData, PKProtobufPaymentToken, PKProtobufShippingMethod;

@interface PKProtobufPayment : PBCodable

{
    NSData *_billingContact;
    NSData *_shippingContact;
    PKProtobufShippingMethod *_shippingMethod;
    PKProtobufPaymentToken *_token;
}

@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) PKProtobufPaymentToken *token;
@property (nonatomic, readonly) _Bool hasBillingContact;
@property (retain, nonatomic) NSData *billingContact;
@property (nonatomic, readonly) _Bool hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (nonatomic, readonly) _Bool hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
