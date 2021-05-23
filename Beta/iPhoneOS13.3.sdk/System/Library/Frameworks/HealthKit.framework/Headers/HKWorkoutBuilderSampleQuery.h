/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKWorkoutBuilder, NSString;

@interface HKWorkoutBuilderSampleQuery : HKQuery

{
    CDUnknownBlockType _samplesAddedHandler;
    _Bool _needsHistoricalFetch;
    HKWorkoutBuilder *_workoutBuilder;
}

@property (weak, nonatomic) HKWorkoutBuilder *workoutBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)client_deliverSamples:(id)arg1 hasFinishedHistoricalFetch:(_Bool)arg2 queryUUID:(id)arg3;
- (id)initWithSampleType:(id)arg1 workoutBuilder:(id)arg2 samplesAddedHandler:(CDUnknownBlockType)arg3;

@end
