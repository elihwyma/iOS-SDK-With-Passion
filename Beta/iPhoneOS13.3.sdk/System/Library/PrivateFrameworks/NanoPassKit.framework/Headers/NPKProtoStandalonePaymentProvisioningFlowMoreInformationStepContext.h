/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentPass, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable

{
    NSMutableArray *_moreInfoItems;
    NPKProtoStandalonePaymentPass *_paymentPass;
}

@property (retain, nonatomic) NSMutableArray *moreInfoItems;
@property (nonatomic, readonly) _Bool hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;

+ (Class)moreInfoItemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMoreInfoItems:(id)arg1;
- (unsigned long long)moreInfoItemsCount;
- (void)clearMoreInfoItems;
- (id)moreInfoItemsAtIndex:(unsigned long long)arg1;

@end
