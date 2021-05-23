/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentSetupProductImageAssetURLs, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentSetupProduct : PBCodable

{
    long long _flags;
    long long _hsa2Requirement;
    long long _supportedProvisioningMethods;
    NSString *_displayName;
    NPKProtoStandalonePaymentSetupProductImageAssetURLs *_imageAssetURLs;
    NSString *_partnerIdentifier;
    NSString *_partnerName;
    NSMutableArray *_paymentOptions;
    NSString *_productIdentifier;
    NSString *_readerModeMetadataJson;
    NSMutableArray *_regions;
    NSMutableArray *_requestedProvisioningMethods;
    NSMutableArray *_requiredFields;
    NSMutableArray *_supportedProtocols;
    NSString *_termsURL;
    _Bool _suppressPendingPurchases;
    struct {
        unsigned int flags:1;
        unsigned int hsa2Requirement:1;
        unsigned int supportedProvisioningMethods:1;
        unsigned int suppressPendingPurchases:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *regions;
@property (nonatomic, readonly) _Bool hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;
@property (nonatomic, readonly) _Bool hasPartnerIdentifier;
@property (retain, nonatomic) NSString *partnerIdentifier;
@property (nonatomic, readonly) _Bool hasPartnerName;
@property (retain, nonatomic) NSString *partnerName;
@property (retain, nonatomic) NSMutableArray *requiredFields;
@property (retain, nonatomic) NSMutableArray *supportedProtocols;
@property (nonatomic, readonly) _Bool hasTermsURL;
@property (retain, nonatomic) NSString *termsURL;
@property (nonatomic) _Bool hasSupportedProvisioningMethods;
@property (nonatomic) long long supportedProvisioningMethods;
@property (nonatomic, readonly) _Bool hasReaderModeMetadataJson;
@property (retain, nonatomic) NSString *readerModeMetadataJson;
@property (nonatomic) _Bool hasFlags;
@property (nonatomic) long long flags;
@property (nonatomic) _Bool hasHsa2Requirement;
@property (nonatomic) long long hsa2Requirement;
@property (nonatomic, readonly) _Bool hasImageAssetURLs;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic) _Bool hasSuppressPendingPurchases;
@property (nonatomic) _Bool suppressPendingPurchases;
@property (retain, nonatomic) NSMutableArray *paymentOptions;
@property (retain, nonatomic) NSMutableArray *requestedProvisioningMethods;

+ (Class)regionsType;
+ (Class)requiredFieldsType;
+ (Class)supportedProtocolsType;
+ (Class)paymentOptionsType;
+ (Class)requestedProvisioningMethodsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)clearRegions;
- (unsigned long long)regionsCount;
- (id)regionsAtIndex:(unsigned long long)arg1;
- (void)addRequiredFields:(id)arg1;
- (void)addSupportedProtocols:(id)arg1;
- (void)addPaymentOptions:(id)arg1;
- (void)addRequestedProvisioningMethods:(id)arg1;
- (unsigned long long)requiredFieldsCount;
- (void)clearRequiredFields;
- (id)requiredFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedProtocolsCount;
- (void)clearSupportedProtocols;
- (id)supportedProtocolsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentOptionsCount;
- (void)clearPaymentOptions;
- (id)paymentOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestedProvisioningMethodsCount;
- (void)clearRequestedProvisioningMethods;
- (id)requestedProvisioningMethodsAtIndex:(unsigned long long)arg1;

@end
