/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@interface C2Metric : NSObject

+ (id)generateDeviceInfo;
+ (id)generateGenericEventWithName:(id)arg1 genericMetricType:(long long)arg2 startTime:(id)arg3 endTime:(id)arg4 attributes:(id)arg5;
+ (id)generateError:(id)arg1;

@end
