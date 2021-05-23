/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent

{
    NSMutableArray *_domChanges;
    NSMutableArray *_requests;
    NSDictionary *_metricsBase;
}

@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (retain, nonatomic) NSString *launchCorrelationKey;
@property (nonatomic) double pageRequestedTime;
@property (nonatomic) double pageAppearTime;
@property (nonatomic) double pageDisappearTime;
@property (nonatomic) double platformRequestStartTime;
@property (nonatomic) double platformResponseStartTime;
@property (nonatomic) double platformResponseEndTime;
@property (nonatomic) _Bool platformResponseWasCached;
@property (nonatomic) double platformJsonParseStartTime;
@property (nonatomic) double platformJsonParseEndTime;
@property (copy, nonatomic, readonly) NSArray *domChanges;
@property (copy, nonatomic, readonly) NSArray *requests;
@property (nonatomic) double resourceRequestStartTime;
@property (nonatomic) double resourceRequestOnScreenEndTime;
@property (nonatomic) double resourceRequestEndTime;
@property (nonatomic) double pageUserReadyTime;
@property (nonatomic, setter=setXPSessionDuration:) double xpSessionDuration;
@property (nonatomic, setter=setXPSamplingForced:) _Bool xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) double xpSamplingPercentageUsers;
@property (copy, nonatomic) NSDictionary *metricsBase;
@property (nonatomic, readonly, getter=isReadyForSubmission) _Bool readyForSubmission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)_randomDouble;
+ (id)_sampleWindowStartTime;
+ (void)_setSampleWindowStartTime:(id)arg1;
+ (_Bool)shouldCollectPageRenderData;
+ (_Bool)shouldCollectPageRenderDataForDocument:(id)arg1;

- (id)init;
- (void)addRequest:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (void)populateObjectInspector:(id)arg1;
- (void)addDOMChange:(id)arg1;
- (void)appendMetricsBaseProperties:(id)arg1;
- (void)appendSamplingPropertiesFromClientContext:(id)arg1;

@end
