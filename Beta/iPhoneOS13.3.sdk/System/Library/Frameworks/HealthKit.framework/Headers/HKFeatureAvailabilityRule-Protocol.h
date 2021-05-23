/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKFeatureAvailabilityRule <Swift>

+ (unsigned short)ruleIdentifier;

- (unsigned short)evaluate;
- (unsigned short)initWithRawValue:dataSource: /* Error: Ran out of types for this method. */;

@end
