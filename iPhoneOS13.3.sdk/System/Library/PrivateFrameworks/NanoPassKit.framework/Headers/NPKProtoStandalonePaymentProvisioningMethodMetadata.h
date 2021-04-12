//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NPKProtoStandalonePaymentDigitalIssuanceMetadata, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying>
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

+ (Class)requiredFieldsType;
@property(retain, nonatomic) NSString *minimumReaderModeBalance; // @synthesize minimumReaderModeBalance=_minimumReaderModeBalance;
@property(retain, nonatomic) NSString *readerModeResourcesJson; // @synthesize readerModeResourcesJson=_readerModeResourcesJson;
@property(retain, nonatomic) NPKProtoStandalonePaymentDigitalIssuanceMetadata *digitalIssuanceMetadata; // @synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata;
@property(retain, nonatomic) NSString *readerModeMetadataJson; // @synthesize readerModeMetadataJson=_readerModeMetadataJson;
@property(retain, nonatomic) NSMutableArray *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(retain, nonatomic) NSString *maxLoadedBalance; // @synthesize maxLoadedBalance=_maxLoadedBalance;
@property(retain, nonatomic) NSString *minLoadedBalance; // @synthesize minLoadedBalance=_minLoadedBalance;
@property(retain, nonatomic) NSString *depositAmount; // @synthesize depositAmount=_depositAmount;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasMinimumReaderModeBalance;
@property(readonly, nonatomic) BOOL hasReaderModeResourcesJson;
@property(readonly, nonatomic) BOOL hasDigitalIssuanceMetadata;
@property(readonly, nonatomic) BOOL hasReaderModeMetadataJson;
- (id)requiredFieldsAtIndex:(NSUInteger)arg1;
- (NSUInteger)requiredFieldsCount;
- (void)addRequiredFields:(id)arg1;
- (void)clearRequiredFields;
@property(readonly, nonatomic) BOOL hasMaxLoadedBalance;
@property(readonly, nonatomic) BOOL hasMinLoadedBalance;
@property(readonly, nonatomic) BOOL hasDepositAmount;
@property(readonly, nonatomic) BOOL hasCurrency;
@property(readonly, nonatomic) BOOL hasProductIdentifier;

@end

