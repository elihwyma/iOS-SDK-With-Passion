/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityCompoundRule : HKFeatureAvailabilityBaseRule

{
    NSString *_grouping;
    NSMutableArray *_rules;
}

@property (retain, nonatomic) NSString *grouping;
@property (retain, nonatomic) NSMutableArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleIdentifier;

- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

@end
