/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@interface MXMMachUtils : NSObject

+ (struct mach_timebase_info *)_timebase;
+ (id)_processNameWithBundleIdentifier:(id)arg1;
+ (double)_nanosecondsWithAbsoluteTime:(unsigned long long)arg1;
+ (unsigned long long)_absoluteTimeWithNanoseconds:(double)arg1;

@end
