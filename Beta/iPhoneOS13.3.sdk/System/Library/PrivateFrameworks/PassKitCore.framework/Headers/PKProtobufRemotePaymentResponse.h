/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSString, PKProtobufPayment;

@interface PKProtobufRemotePaymentResponse : PBCodable

{
    PKProtobufPayment *_payment;
    NSString *_remotePaymentRequestIdentifier;
}

@property (nonatomic, readonly) _Bool hasPayment;
@property (retain, nonatomic) PKProtobufPayment *payment;
@property (nonatomic, readonly) _Bool hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;

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
