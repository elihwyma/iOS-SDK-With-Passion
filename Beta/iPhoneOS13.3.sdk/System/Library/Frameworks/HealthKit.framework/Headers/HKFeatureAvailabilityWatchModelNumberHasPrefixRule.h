/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityWatchModelNumberHasPrefixRule : HKFeatureAvailabilityBaseRule

{
    NSString *_modelNumberPrefix;
}

@property (retain, nonatomic) NSString *modelNumberPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleIdentifier;

- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

@end
