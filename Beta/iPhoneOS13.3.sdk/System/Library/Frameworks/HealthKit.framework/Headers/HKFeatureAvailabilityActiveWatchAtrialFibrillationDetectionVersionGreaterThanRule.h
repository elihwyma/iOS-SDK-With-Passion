/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionGreaterThanRule : HKFeatureAvailabilityBaseRule

{
    CDStruct_f6aba300 _targetVersion;
}

@property (nonatomic) CDStruct_f6aba300 targetVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleIdentifier;

- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

@end
