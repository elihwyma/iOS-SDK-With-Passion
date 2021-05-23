/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/Swift-Protocol.h>

@class AMSBagValue;

@protocol AMSMescalBagContract, AMSMetricsBagContract;

@protocol AMSURLBagContract <Swift>

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

@end
