/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentPass, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowIssuerVerificationChannelsStepContext : PBCodable

{
    NPKProtoStandalonePaymentPass *_paymentPass;
    NSMutableArray *_verificationChannels;
}

@property (nonatomic, readonly) _Bool hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (retain, nonatomic) NSMutableArray *verificationChannels;

+ (Class)verificationChannelsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVerificationChannels:(id)arg1;
- (unsigned long long)verificationChannelsCount;
- (void)clearVerificationChannels;
- (id)verificationChannelsAtIndex:(unsigned long long)arg1;

@end
