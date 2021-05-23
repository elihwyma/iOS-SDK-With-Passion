/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@class HKConcept;

@protocol HKCodedSample <Swift>

@property (copy, nonatomic, readonly) HKConcept *primaryConcept;

@end
