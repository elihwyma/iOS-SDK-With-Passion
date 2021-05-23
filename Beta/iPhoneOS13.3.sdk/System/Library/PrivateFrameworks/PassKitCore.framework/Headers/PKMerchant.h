/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSURL, PKMapsBrand, PKMapsMerchant;

@interface PKMerchant : NSObject <Swift>

{
    _Bool _useRawMerchantData;
    NSString *_displayName;
    NSURL *_originURL;
    NSString *_webMerchantIdentifier;
    NSString *_webMerchantName;
    long long _adamIdentifier;
    long long _industryCode;
    NSString *_industryCategory;
    NSString *_name;
    NSString *_rawName;
    NSString *_merchantIdentifier;
    NSString *_rawCANL;
    NSString *_rawCity;
    NSString *_rawState;
    NSString *_rawCountry;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    long long _cleanConfidenceLevel;
    long long _fallbackcategory;
    NSString *_fallbackDetailedCategory;
    PKMapsMerchant *_mapsMerchant;
    PKMapsBrand *_mapsBrand;
}

@property (copy, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (nonatomic) long long adamIdentifier;
@property (nonatomic) long long industryCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawName;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *rawCANL;
@property (copy, nonatomic) NSString *rawCity;
@property (copy, nonatomic) NSString *rawState;
@property (copy, nonatomic) NSString *rawCountry;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *zip;
@property (nonatomic) long long cleanConfidenceLevel;
@property (nonatomic) _Bool useRawMerchantData;
@property (nonatomic) long long fallbackcategory;
@property (copy, nonatomic) NSString *fallbackDetailedCategory;
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant;
@property (retain, nonatomic) PKMapsBrand *mapsBrand;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool hasMapsMatch;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *detailedCategory;
@property (nonatomic, readonly) NSURL *heroImageURL;
@property (nonatomic, readonly) NSString *heroImageAttribution;
@property (nonatomic, readonly) NSURL *logoImageURL;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSURL *businessChatURL;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (_Bool)hasCloudArchivableDeviceData;
- (_Bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (void)_regenerateDisplayName;
- (_Bool)isEqualToMerchant:(id)arg1;

@end
