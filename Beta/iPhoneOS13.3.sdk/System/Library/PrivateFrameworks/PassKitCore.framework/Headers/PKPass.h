/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, PKBarcode, PKImage, PKLiveRenderedShaderSet, PKNFCPayload, PKPassDisplayProfile, PKPassLiveRenderedImageSet, PKPassPersonalization, PKPaymentPass, UIImage;

@interface PKPass : PKObject <Swift>

{
    PKLiveRenderedShaderSet *_liveRenderedShaderSet;
    _Bool _remotePass;
    _Bool _isCloudKitArchived;
    _Bool _voided;
    _Bool _hasStoredValue;
    _Bool _liveRenderedBackground;
    _Bool _supportsCategoryVisualization;
    _Bool _revoked;
    unsigned long long _passType;
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    NSString *_organizationName;
    NSDate *_relevantDate;
    NSDictionary *_userInfo;
    NSString *_deviceName;
    NSString *_passLibraryMachServiceName;
    NSNumber *_sequenceCounter;
    NSURL *_passURL;
    NSString *_teamID;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSSet *_embeddedLocations;
    NSSet *_embeddedBeacons;
    NSURL *_webLocationsURL;
    NSURL *_localLocationsURL;
    long long _sharingMethod;
    NSURL *_sharingURL;
    NSString *_sharingText;
    NSSet *_associatedPassTypeIdentifiers;
    PKNFCPayload *_nfcPayload;
    PKImage *_partialFrontFaceImagePlaceholder;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
}

@property (nonatomic, readonly) _Bool silenceRequested;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) _Bool hasFlightDetails;
@property (nonatomic, readonly) NSString *airlineCode;
@property (nonatomic, readonly) unsigned long long flightNumber;
@property (nonatomic, readonly) NSString *flightCode;
@property (copy, nonatomic) NSString *passLibraryMachServiceName;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic, getter=isRemotePass) _Bool remotePass;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSNumber *sequenceCounter;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSDate *relevantDate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSURL *passURL;
@property (nonatomic) _Bool isCloudKitArchived;
@property (nonatomic) unsigned long long passType;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=isVoided) _Bool voided;
@property (copy, nonatomic) NSString *groupingID;
@property (copy, nonatomic) NSSet *embeddedLocations;
@property (copy, nonatomic) NSSet *embeddedBeacons;
@property (copy, nonatomic) NSURL *webLocationsURL;
@property (copy, nonatomic) NSURL *localLocationsURL;
@property (copy, nonatomic) PKPassDisplayProfile *displayProfile;
@property (copy, nonatomic) NSURL *webServiceURL;
@property (copy, nonatomic) NSString *authenticationToken;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSString *pluralLocalizedName;
@property (nonatomic, readonly) NSString *lowercaseLocalizedName;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic) long long sharingMethod;
@property (copy, nonatomic) NSURL *sharingURL;
@property (copy, nonatomic) NSString *sharingText;
@property (copy, nonatomic) NSSet *associatedPassTypeIdentifiers;
@property (copy, nonatomic, setter=setNFCPayload:) PKNFCPayload *nfcPayload;
@property (readonly) NSString *notificationCenterTitle;
@property (nonatomic) _Bool hasStoredValue;
@property (nonatomic, readonly) PKBarcode *barcode;
@property (nonatomic, readonly) PKImage *footerImage;
@property (nonatomic, readonly) NSString *logoText;
@property (nonatomic, readonly) long long transitType;
@property (nonatomic, readonly) NSArray *frontFieldBuckets;
@property (nonatomic, readonly) NSArray *backFieldBuckets;
@property (nonatomic, readonly) PKImage *iconImage;
@property (nonatomic, readonly) PKImage *rawIcon;
@property (nonatomic, readonly) PKImage *notificationIconImage;
@property (nonatomic, readonly) PKImage *frontFaceImage;
@property (nonatomic, readonly) PKImage *frontFaceShadowImage;
@property (nonatomic, readonly) PKImage *partialFrontFaceImage;
@property (nonatomic, readonly) PKImage *partialFrontFaceImagePlaceholder;
@property (nonatomic, readonly) PKImage *cardHolderPicture;
@property (nonatomic, readonly) PKImage *personalizationLogoImage;
@property (nonatomic) _Bool liveRenderedBackground;
@property (nonatomic) _Bool supportsCategoryVisualization;
@property (nonatomic, readonly) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property (nonatomic, readonly) PKPassLiveRenderedImageSet *liveRenderedImageSet;
@property (nonatomic, readonly) struct CGRect logoRect;
@property (nonatomic, readonly) struct CGRect thumbnailRect;
@property (nonatomic, readonly) struct CGRect stripRect;
@property (nonatomic, readonly) NSArray *storeIdentifiers;
@property (nonatomic, readonly) NSURL *appLaunchURL;
@property (nonatomic, readonly) PKPassPersonalization *personalization;
@property (nonatomic, readonly) _Bool isPersonalizable;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) NSString *businessChatIdentifier;
@property (retain, nonatomic) NSDate *ingestedDate;
@property (retain, nonatomic) NSDate *modifiedDate;
@property (nonatomic, getter=isRevoked) _Bool revoked;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (copy, nonatomic, readonly) UIImage *icon;
@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *localizedDescription;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)defaultSettings;
+ (_Bool)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
+ (Class)classForPassType:(unsigned long long)arg1;
+ (id)cloudStorePassRecordNamePrefix;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)backgroundImage;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (_Bool)isUpdatable;
- (_Bool)isExpired;
- (unsigned long long)itemType;
- (id)thumbnailImage;
- (_Bool)hasValidNFCPayload;
- (id)fieldForKey:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (id)numberForSemanticKey:(id)arg1;
- (id)stringForSemanticKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (_Bool)availableForAutomaticPresentationUsingBeaconContext;
- (_Bool)availableForAutomaticPresentationUsingVASContext;
- (id)semantics;
- (id)balanceFields;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasLocationRelevancyInfo;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (id)primaryFields;
- (id)allSemantics;
- (id)logoImage;
- (id)stripImage;
- (_Bool)hasTimeOrLocationRelevancyInfo;
- (_Bool)isRelevantDateOld;
- (_Bool)supportsSharing;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)diff:(id)arg1;
- (_Bool)isEqualToPassIncludingMetadata:(id)arg1;
- (id)dateForSemanticKey:(id)arg1;
- (id)locationForSemanticKey:(id)arg1;
- (id)currencyAmountForSemanticKey:(id)arg1;
- (id)personNameComponentsForSemanticKey:(id)arg1;
- (id)stringsForSemanticKey:(id)arg1;
- (id)dictionariesForSemanticKey:(id)arg1;
- (void)loadFlightsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
