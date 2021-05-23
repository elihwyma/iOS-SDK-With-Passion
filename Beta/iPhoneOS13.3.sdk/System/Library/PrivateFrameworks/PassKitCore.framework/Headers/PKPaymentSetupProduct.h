/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, PKPaymentSetupProductConfiguration, PKPaymentSetupProductImageAssetURLs, PKPaymentSetupProductImageAssets;

@interface PKPaymentSetupProduct : NSObject

{
    _Bool _suppressPendingPurchases;
    _Bool _hasAccount;
    PKPaymentSetupProductConfiguration *_configuration;
    NSSet *_regions;
    NSArray *_requiredFields;
    NSArray *_supportedProtocols;
    NSURL *_termsURL;
    long long _supportedProvisioningMethods;
    NSDictionary *_readerModeMetadata;
    unsigned long long _flags;
    long long _hsa2Requirement;
    PKPaymentSetupProductImageAssetURLs *_imageAssetURLs;
    PKPaymentSetupProductImageAssets *_imageAssets;
    NSArray *_associatedStoreIdentifiers;
    NSURL *_appLaunchURL;
    NSArray *_searchTerms;
    NSArray *_supportedCameraCaptureTypes;
    NSArray *_supportedInAppTypes;
    NSArray *_supportedTransitNetworkIdentifiers;
    NSArray *_featureApplications;
    NSArray *_onboardingItems;
    NSArray *_paymentOptions;
    NSDictionary *_rawDictionary;
    NSDictionary *_minimumOSVersion;
    NSMutableDictionary *_requestedProvisioningMethods;
    NSString *_displayName;
}

@property (copy, nonatomic) NSSet *regions;
@property (copy, nonatomic) NSArray *requiredFields;
@property (copy, nonatomic) NSArray *supportedProtocols;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSArray *associatedStoreIdentifiers;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (retain, nonatomic) NSDictionary *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *rawDictionary;
@property (retain, nonatomic) NSMutableDictionary *requestedProvisioningMethods;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long hsa2Requirement;
@property (retain, nonatomic) NSArray *featureApplications;
@property (nonatomic) _Bool hasAccount;
@property (retain, nonatomic) NSArray *onboardingItems;
@property (copy, nonatomic, readonly) PKPaymentSetupProductConfiguration *configuration;
@property (copy, nonatomic, readonly) NSString *partnerName;
@property (nonatomic) long long supportedProvisioningMethods;
@property (copy, nonatomic, readonly) NSDictionary *readerModeMetadata;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssets *imageAssets;
@property (nonatomic, readonly) _Bool suppressPendingPurchases;
@property (copy, nonatomic, readonly) NSArray *searchTerms;
@property (copy, nonatomic, readonly) NSArray *supportedCameraCaptureTypes;
@property (copy, nonatomic, readonly) NSArray *supportedInAppTypes;
@property (copy, nonatomic, readonly) NSArray *supportedTransitNetworkIdentifiers;
@property (copy, nonatomic, readonly) NSArray *paymentOptions;

+ (void)_updateProduct:(id)arg1 withDebugConfigurationForState:(unsigned long long)arg2;
+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (id)_displayNameForCardType:(id)arg1;
+ (id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2;
+ (id)productsFromBrowseableBankApps:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)productIdentifier;
- (id)partnerIdentifier;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (id)initWithFeatureIdentifier:(unsigned long long)arg1;
- (id)provisioningMethodTypes;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (long long)allSupportedProtocols;
- (id)initWithProductDictionary:(id)arg1;
- (_Bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (_Bool)supportsDevice:(id)arg1;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12 suppressPendingPurchases:(id)arg13 supportedTransitNetworkIdentifiers:(id)arg14 onboardingItems:(id)arg15 actionBaseURL:(id)arg16 productState:(id)arg17;

@end
