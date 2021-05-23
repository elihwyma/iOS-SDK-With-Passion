/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSURL;

@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceConfiguration : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_configuration;
    NSNumber *_version;
    NSURL *_configurationURL;
}

@property (copy) NSDictionary *configuration;
@property (weak, readonly) NSNumber *version;
@property (copy) NSURL *configurationURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (_Bool)peerPaymentEnabledForRegion:(id)arg1;
- (_Bool)applyServiceEnabledForRegion:(id)arg1;
- (_Bool)accountServiceEnabledForRegion:(id)arg1;
- (id)paymentSetupFeaturedNetworksForRegion:(id)arg1;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)arg1;
- (_Bool)buddyProvisioningEnabledForRegion:(id)arg1;
- (_Bool)buddyManualProvisioningEnabledForRegion:(id)arg1;
- (id)discoveryManifestURLForRegion:(id)arg1;
- (id)unsupportedWebPaymentConfigurations;
- (_Bool)AMPNonDefaultBehaviourDisabledForRegion:(id)arg1;
- (id)primaryFeaturedNetworkForRegion:(id)arg1;
- (id)heroImageManifestURLForRegion:(id)arg1;
- (_Bool)browseProvisioningBankAppsEnabledForRegion:(id)arg1;
- (id)marketsURL;
- (_Bool)suppressCardholderNameFieldForRegion:(id)arg1;
- (_Bool)regionHasProvisioningEnablementPercentage:(id)arg1;
- (double)provisioningEnablementPercentageForRegion:(id)arg1;
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)arg1;
- (id)betaPaymentNetworksForRegion:(id)arg1;
- (id)betaPaymentNetworkVersionsForRegion:(id)arg1;
- (id)applyServiceFeaturesForRegion:(id)arg1;
- (id)_queue_region:(id)arg1;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;
- (id)_queue_regions;
- (_Bool)_queue_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4;
- (id)initWithConfiguration:(id)arg1 url:(id)arg2;
- (id)brokerURLForRegion:(id)arg1;
- (id)paymentServicesURLForRegion:(id)arg1;
- (id)paymentServicesMerchantURLForRegion:(id)arg1;
- (_Bool)manualProvisioningEnabledForRegion:(id)arg1;
- (_Bool)cameraFirstProvisioningEnabledForRegion:(id)arg1;
- (_Bool)userCanResetCloudStoreApplePayViewForRegion:(id)arg1;
- (id)maxRefreshIntervalForUnsupportedRegion;
- (id)maxRefreshIntervalForRegion:(id)arg1;
- (_Bool)remotePaymentsRequiredForVoiceover;
- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)arg1;
- (id)marketGeoRegionNotificationDisabledNetworksForRegion:(id)arg1;
- (id)marketGeoRegionNotificationSendLimitForRegion:(id)arg1;
- (id)marketGeoRegionNotificationHourForRegion:(id)arg1;
- (_Bool)browseProvisioningBankAppsManualEntryDisabledForRegion:(id)arg1;
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)arg1;
- (double)deviceCheckInIntervalForRegion:(id)arg1;
- (_Bool)deviceCheckInDisabledForRegion:(id)arg1;
- (_Bool)shouldPaymentSetupFeaturesUseStrictProductsCheckForRegion:(id)arg1;

@end
