/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBRequest.h>

@class NSData, NSMutableArray, NSString, PKProtobufPaymentMerchantSession;

@interface PKProtobufPaymentRequest : PBRequest

{
    unsigned int _apiType;
    NSData *_applicationData;
    NSData *_billingContact;
    NSString *_countryCode;
    NSString *_currencyCode;
    unsigned int _merchantCapabilities;
    NSString *_merchantIdentifier;
    PKProtobufPaymentMerchantSession *_merchantSession;
    NSString *_originatingURL;
    unsigned int _requiredBillingAddressFields;
    NSMutableArray *_requiredBillingContactFields;
    unsigned int _requiredShippingAddressFields;
    NSMutableArray *_requiredShippingContactFields;
    NSData *_shippingContact;
    NSMutableArray *_shippingMethods;
    NSMutableArray *_summaryItems;
    NSMutableArray *_supportedCountries;
    NSMutableArray *_supportedNetworks;
    NSMutableArray *_thumbnailURLs;
    _Bool _expectsMerchantSession;
    struct {
        unsigned int apiType:1;
        unsigned int merchantCapabilities:1;
        unsigned int requiredBillingAddressFields:1;
        unsigned int requiredShippingAddressFields:1;
        unsigned int expectsMerchantSession:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSMutableArray *supportedNetworks;
@property (nonatomic) _Bool hasMerchantCapabilities;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic) _Bool hasRequiredBillingAddressFields;
@property (nonatomic) unsigned int requiredBillingAddressFields;
@property (nonatomic) _Bool hasRequiredShippingAddressFields;
@property (nonatomic) unsigned int requiredShippingAddressFields;
@property (nonatomic, readonly) _Bool hasBillingContact;
@property (retain, nonatomic) NSData *billingContact;
@property (nonatomic, readonly) _Bool hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (retain, nonatomic) NSMutableArray *summaryItems;
@property (retain, nonatomic) NSMutableArray *shippingMethods;
@property (nonatomic, readonly) _Bool hasApplicationData;
@property (retain, nonatomic) NSData *applicationData;
@property (nonatomic, readonly) _Bool hasOriginatingURL;
@property (retain, nonatomic) NSString *originatingURL;
@property (nonatomic, readonly) _Bool hasMerchantSession;
@property (retain, nonatomic) PKProtobufPaymentMerchantSession *merchantSession;
@property (retain, nonatomic) NSMutableArray *thumbnailURLs;
@property (nonatomic) _Bool hasExpectsMerchantSession;
@property (nonatomic) _Bool expectsMerchantSession;
@property (retain, nonatomic) NSMutableArray *requiredShippingContactFields;
@property (retain, nonatomic) NSMutableArray *requiredBillingContactFields;
@property (retain, nonatomic) NSMutableArray *supportedCountries;
@property (nonatomic) _Bool hasApiType;
@property (nonatomic) unsigned int apiType;

+ (Class)shippingMethodsType;
+ (Class)supportedNetworksType;
+ (Class)summaryItemsType;
+ (Class)thumbnailURLsType;
+ (Class)requiredShippingContactFieldsType;
+ (Class)requiredBillingContactFieldsType;
+ (Class)supportedCountriesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addThumbnailURLs:(id)arg1;
- (void)addSummaryItems:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (unsigned long long)shippingMethodsCount;
- (void)clearShippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (void)addSupportedNetworks:(id)arg1;
- (void)addRequiredShippingContactFields:(id)arg1;
- (void)addRequiredBillingContactFields:(id)arg1;
- (void)addSupportedCountries:(id)arg1;
- (unsigned long long)supportedNetworksCount;
- (void)clearSupportedNetworks;
- (id)supportedNetworksAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryItemsCount;
- (void)clearSummaryItems;
- (id)summaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)thumbnailURLsCount;
- (void)clearThumbnailURLs;
- (id)thumbnailURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredShippingContactFieldsCount;
- (void)clearRequiredShippingContactFields;
- (id)requiredShippingContactFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredBillingContactFieldsCount;
- (void)clearRequiredBillingContactFields;
- (id)requiredBillingContactFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedCountriesCount;
- (void)clearSupportedCountries;
- (id)supportedCountriesAtIndex:(unsigned long long)arg1;

@end
