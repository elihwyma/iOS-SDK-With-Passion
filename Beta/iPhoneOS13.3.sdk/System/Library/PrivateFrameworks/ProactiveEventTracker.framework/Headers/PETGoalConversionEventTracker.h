/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@class NSString;

@interface PETGoalConversionEventTracker

{
    NSString *_opportunityEvent;
    NSString *_conversionEvent;
}

@property (nonatomic, readonly) NSString *opportunityEvent;
@property (nonatomic, readonly) NSString *conversionEvent;

- (void)trackGoalOpportunityEventWithPropertyValues:(id)arg1;
- (void)trackGoalConversionEventWithPropertyValues:(id)arg1;
- (id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4;
- (void)trackGoalOpportunityEventWithConversion:(_Bool)arg1 propertyValues:(id)arg2;
- (id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 propertySubsets:(id)arg5;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (id)_keyMetadataForEvent:(id)arg1;

@end
