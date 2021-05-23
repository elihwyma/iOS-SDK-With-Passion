/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class CLLocation, CNPostalAddress, MKWalletMerchantStylingInfo, NSString, NSURL;

@interface PKMapsMerchant : NSObject <Swift>

{
    int _resultProviderIdentifier;
    unsigned long long _identifier;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_url;
    double _locationLatitude;
    double _locationLongitude;
    CNPostalAddress *_postalAddress;
    NSURL *_heroImageURL;
    NSString *_heroImageAttributionName;
    long long _category;
    NSString *_detailedCategory;
    MKWalletMerchantStylingInfo *_stylingInfo;
    NSURL *_businessChatURL;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) int resultProviderIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (copy, nonatomic) CNPostalAddress *postalAddress;
@property (copy, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *heroImageAttributionName;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *detailedCategory;
@property (retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo;
@property (copy, nonatomic) NSURL *businessChatURL;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonRepresentation;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (_Bool)hasCloudArchivableDeviceData;
- (_Bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (id)_jsonEncodedPostalAddressString;
- (_Bool)isEqualToMapsMerchant:(id)arg1;

@end
