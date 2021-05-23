/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@interface SCNStatisticsProvider : NSObject

- (int)startCollectingPerformanceStatisticsForPid:(int)arg1;
- (int)stopCollectingPerformanceStatisticsForPid:(int)arg1;
- (id)performanceStatisticsForPid:(int)arg1;
- (id)collectedShadersForPid:(int)arg1;

@end
