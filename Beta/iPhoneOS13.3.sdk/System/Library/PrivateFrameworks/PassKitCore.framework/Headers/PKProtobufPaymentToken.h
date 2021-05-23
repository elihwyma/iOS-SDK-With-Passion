/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSData, NSString, PKProtobufPaymentMethod;

@interface PKProtobufPaymentToken : PBCodable

{
    NSString *_instrumentName;
    NSString *_network;
    NSData *_paymentData;
    PKProtobufPaymentMethod *_paymentMethod;
    NSString *_redeemURL;
    NSString *_retryNonce;
    NSString *_transactionIdentifier;
}

@property (nonatomic, readonly) _Bool hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;
@property (nonatomic, readonly) _Bool hasInstrumentName;
@property (retain, nonatomic) NSString *instrumentName;
@property (nonatomic, readonly) _Bool hasNetwork;
@property (retain, nonatomic) NSString *network;
@property (nonatomic, readonly) _Bool hasTransactionIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (nonatomic, readonly) _Bool hasPaymentData;
@property (retain, nonatomic) NSData *paymentData;
@property (nonatomic, readonly) _Bool hasRedeemURL;
@property (retain, nonatomic) NSString *redeemURL;
@property (nonatomic, readonly) _Bool hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;

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
