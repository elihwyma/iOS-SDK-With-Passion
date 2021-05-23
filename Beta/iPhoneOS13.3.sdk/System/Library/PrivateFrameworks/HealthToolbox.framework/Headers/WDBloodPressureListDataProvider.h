/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDBloodPressureListDataProvider : WDSampleListDataProvider

{
    NSArray *_systolicAndDiastolicTypes;
}

- (id)sampleTypes;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)textForObject:(id)arg1;
- (id)predicateForType:(id)arg1;

@end
