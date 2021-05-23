/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/MTObject.h>

#import <MetricsKit/Swift-Protocol.h>

@class AMSBag, AMSBagValue, AMSMetrics, NSDictionary, NSString;

@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface MTEventRecorderAMSMetricsDelegate : MTObject <Swift>

{
    _Bool _monitorsLifecycleEvents;
    _Bool _personalizedWithItunesAccount;
    NSString *_containerId;
    NSDictionary *_lastMetricsDictionary;
    AMSBag *_amsBag;
    AMSMetrics *_bagBasedAMSMetrics;
    AMSMetrics *_contractBasedAMSMetrics;
    AMSMetrics *_backgroundAMSMetrics;
}

@property (retain, nonatomic) NSString *containerId;
@property (retain, nonatomic) NSDictionary *lastMetricsDictionary;
@property (retain, nonatomic) AMSBag *amsBag;
@property (retain, nonatomic) AMSMetrics *bagBasedAMSMetrics;
@property (retain, nonatomic) AMSMetrics *contractBasedAMSMetrics;
@property (retain, nonatomic) AMSMetrics *backgroundAMSMetrics;
@property (nonatomic) _Bool monitorsLifecycleEvents;
@property (nonatomic) _Bool personalizedWithItunesAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (id)bundleIdentifier;

- (id)initWithContainerId:(id)arg1;
- (id)flushUnreportedEvents;
- (id)initWithContainerId:(id)arg1 amsBag:(id)arg2;
- (id)prepareMetrics;
- (id)lookupItunesAccount:(id)arg1;
- (id)activeItunesAccount;
- (_Bool)shouldFlushBackgroundMetrics;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)sendMethod;
- (id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3;

@end
