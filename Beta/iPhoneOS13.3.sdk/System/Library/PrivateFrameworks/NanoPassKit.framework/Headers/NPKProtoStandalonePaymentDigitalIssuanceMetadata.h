/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentDigitalIssuanceMetadata : PBCodable

{
    NSString *_action;
    NSMutableArray *_defaultSuggestions;
    NSString *_merchantID;
    NSMutableArray *_serviceProviderCapabilities;
    NSString *_serviceProviderCountryCode;
    NSString *_serviceProviderDictJson;
    NSString *_serviceProviderIdentifier;
    NSMutableArray *_serviceProviderSupportedNetworks;
}

@property (nonatomic, readonly) _Bool hasServiceProviderIdentifier;
@property (retain, nonatomic) NSString *serviceProviderIdentifier;
@property (nonatomic, readonly) _Bool hasServiceProviderCountryCode;
@property (retain, nonatomic) NSString *serviceProviderCountryCode;
@property (retain, nonatomic) NSMutableArray *serviceProviderSupportedNetworks;
@property (retain, nonatomic) NSMutableArray *serviceProviderCapabilities;
@property (nonatomic, readonly) _Bool hasServiceProviderDictJson;
@property (retain, nonatomic) NSString *serviceProviderDictJson;
@property (nonatomic, readonly) _Bool hasAction;
@property (retain, nonatomic) NSString *action;
@property (nonatomic, readonly) _Bool hasMerchantID;
@property (retain, nonatomic) NSString *merchantID;
@property (retain, nonatomic) NSMutableArray *defaultSuggestions;

+ (Class)serviceProviderSupportedNetworksType;
+ (Class)serviceProviderCapabilitiesType;
+ (Class)defaultSuggestionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addServiceProviderSupportedNetworks:(id)arg1;
- (void)addServiceProviderCapabilities:(id)arg1;
- (void)addDefaultSuggestions:(id)arg1;
- (unsigned long long)serviceProviderSupportedNetworksCount;
- (void)clearServiceProviderSupportedNetworks;
- (id)serviceProviderSupportedNetworksAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceProviderCapabilitiesCount;
- (void)clearServiceProviderCapabilities;
- (id)serviceProviderCapabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSuggestionsCount;
- (void)clearDefaultSuggestions;
- (id)defaultSuggestionsAtIndex:(unsigned long long)arg1;

@end
