/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSData, NSString, PKProtobufPaymentMethod, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable

{
    PKProtobufPaymentMethod *_paymentMethod;
    NSString *_remotePaymentRequestIdentifier;
    NSData *_shippingContact;
    PKProtobufShippingMethod *_shippingMethod;
}

@property (nonatomic, readonly) _Bool hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (nonatomic, readonly) _Bool hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (nonatomic, readonly) _Bool hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;
@property (nonatomic, readonly) _Bool hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;

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
