/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityAlwaysTrueRule : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleIdentifier;

- (_Bool)evaluate;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;

@end
