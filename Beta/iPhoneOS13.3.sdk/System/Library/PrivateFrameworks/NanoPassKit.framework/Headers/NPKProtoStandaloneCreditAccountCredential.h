/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass, NSString;

@interface NPKProtoStandaloneCreditAccountCredential : PBCodable

{
    double _creditLimit;
    double _currentBalance;
    NSString *_currencyCode;
    NPKProtoStandalonePaymentCredential *_paymentCredential;
    NPKProtoStandalonePaymentPass *_paymentPass;
    struct {
        unsigned int creditLimit:1;
        unsigned int currentBalance:1;
    } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (nonatomic, readonly) _Bool hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) _Bool hasCurrentBalance;
@property (nonatomic) double currentBalance;
@property (nonatomic) _Bool hasCreditLimit;
@property (nonatomic) double creditLimit;

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
