/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent

{
    NSMutableDictionary *_templateMetrics;
}

@property (retain, nonatomic) NSString *launchCorrelationKey;
@property (nonatomic) double mainTime;
@property (nonatomic) double clientConfigurationLoadTime;
@property (copy, nonatomic, readonly) NSDictionary *templateMetrics;
@property (nonatomic) double bootstrapStartTime;
@property (nonatomic) double bootstrapEndTime;
@property (nonatomic) double jsResourcesStartTime;
@property (nonatomic) double jsResourcesEndTime;
@property (nonatomic) double initialTabRequestStartTime;
@property (nonatomic) double initialTabResponseStartTime;
@property (nonatomic) double initialTabResponseEndTime;
@property (nonatomic) double launchFailureTime;
@property (nonatomic) double launchEndTime;
@property (nonatomic) _Bool requiredBlockingBagLoad;
@property (nonatomic) _Bool usedBootstrapFallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)processStartTime;
+ (void)withPendingLaunchEvent:(CDUnknownBlockType)arg1;
+ (void)createPendingLaunchEvent;
+ (id)consumePendingLaunchEvent;
+ (void)resetPendingLaunchEventForTesting;

- (id)init;
- (void)appendPropertiesToBody:(id)arg1;
- (void)populateObjectInspector:(id)arg1;
- (void)addTemplateLoadTimingMetric:(id)arg1 forURL:(id)arg2;

@end
