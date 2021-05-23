/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentDigitalIssuanceMetadata, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable

{
    NSString *_currency;
    NSString *_depositAmount;
    NPKProtoStandalonePaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
    NSString *_maxLoadedBalance;
    NSString *_minLoadedBalance;
    NSString *_minimumReaderModeBalance;
    NSString *_productIdentifier;
    NSString *_readerModeMetadataJson;
    NSString *_readerModeResourcesJson;
    NSMutableArray *_requiredFields;
}

@property (nonatomic, readonly) _Bool hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;
@property (nonatomic, readonly) _Bool hasCurrency;
@property (retain, nonatomic) NSString *currency;
@property (nonatomic, readonly) _Bool hasDepositAmount;
@property (retain, nonatomic) NSString *depositAmount;
@property (nonatomic, readonly) _Bool hasMinLoadedBalance;
@property (retain, nonatomic) NSString *minLoadedBalance;
@property (nonatomic, readonly) _Bool hasMaxLoadedBalance;
@property (retain, nonatomic) NSString *maxLoadedBalance;
@property (retain, nonatomic) NSMutableArray *requiredFields;
@property (nonatomic, readonly) _Bool hasReaderModeMetadataJson;
@property (retain, nonatomic) NSString *readerModeMetadataJson;
@property (nonatomic, readonly) _Bool hasDigitalIssuanceMetadata;
@property (retain, nonatomic) NPKProtoStandalonePaymentDigitalIssuanceMetadata *digitalIssuanceMetadata;
@property (nonatomic, readonly) _Bool hasReaderModeResourcesJson;
@property (retain, nonatomic) NSString *readerModeResourcesJson;
@property (nonatomic, readonly) _Bool hasMinimumReaderModeBalance;
@property (retain, nonatomic) NSString *minimumReaderModeBalance;

+ (Class)requiredFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRequiredFields:(id)arg1;
- (unsigned long long)requiredFieldsCount;
- (void)clearRequiredFields;
- (id)requiredFieldsAtIndex:(unsigned long long)arg1;

@end
