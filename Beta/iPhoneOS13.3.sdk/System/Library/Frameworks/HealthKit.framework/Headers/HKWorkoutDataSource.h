/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface HKWorkoutDataSource : NSObject

+ (id)observedTypesForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2 connectedToFitnessMachine:(_Bool)arg3;
+ (id)_distanceTypeForActivityType:(unsigned long long)arg1 isIndoor:(_Bool)arg2;

@end
