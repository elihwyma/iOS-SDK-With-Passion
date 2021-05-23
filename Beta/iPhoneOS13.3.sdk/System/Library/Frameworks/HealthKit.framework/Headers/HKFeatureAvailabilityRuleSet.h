/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HKFeatureAvailabilityRuleSet : NSObject

{
    NSMutableDictionary *_conditions;
}

@property (retain, nonatomic) NSMutableDictionary *conditions;

- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;
- (id)evaluateAll;
- (void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2;

@end
