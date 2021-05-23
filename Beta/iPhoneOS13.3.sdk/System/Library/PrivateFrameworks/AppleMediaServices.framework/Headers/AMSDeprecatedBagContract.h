/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBagValue, NSString;

@protocol AMSBagProtocol, AMSMescalBagContract, AMSMetricsBagContract;

__attribute__((visibility("hidden")))
@interface AMSDeprecatedBagContract : NSObject

{
    id <AMSBagProtocol> _bag;
}

@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (nonatomic, readonly) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (nonatomic, readonly) AMSBagValue *apsEnabledPatterns;
@property (nonatomic, readonly) AMSBagValue *apsSamplingPercent;
@property (nonatomic, readonly) AMSBagValue *apsAllowedProductTypes;
@property (nonatomic, readonly) AMSBagValue *guidRegexes;
@property (nonatomic, readonly) AMSBagValue *guidSchemes;
@property (nonatomic, readonly) id <AMSMescalBagContract> mescalContract;
@property (nonatomic, readonly) AMSBagValue *storefrontSuffix;
@property (nonatomic, readonly) AMSBagValue *TLSSamplingPercentage;
@property (nonatomic, readonly) AMSBagValue *TLSSamplingSessionDuration;
@property (nonatomic, readonly) AMSBagValue *TFOSamplingPercentage;
@property (nonatomic, readonly) AMSBagValue *TFOSamplingSessionDuration;
@property (nonatomic, readonly) AMSBagValue *trustedDomains;
@property (nonatomic, readonly) id <AMSMetricsBagContract> metricsContract;
@property (nonatomic, readonly) AMSBagValue *metricsURL;
@property (nonatomic, readonly) AMSBagValue *metricsDictionary;
@property (nonatomic, readonly) AMSBagValue *metricsUrl;
@property (nonatomic, readonly) AMSBagValue *mescalCertificateURL;
@property (nonatomic, readonly) AMSBagValue *mescalSetupURL;
@property (nonatomic, readonly) AMSBagValue *mescalPrimingURL;
@property (nonatomic, readonly) AMSBagValue *mescalSignedActions;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapRequests;
@property (nonatomic, readonly) AMSBagValue *mescalSignSapResponses;
@property (nonatomic, readonly) AMSBagValue *personalizedLookupURL;
@property (nonatomic, readonly) AMSBagValue *unpersonalizedLookupURL;

- (id)initWithBag:(id)arg1;

@end
