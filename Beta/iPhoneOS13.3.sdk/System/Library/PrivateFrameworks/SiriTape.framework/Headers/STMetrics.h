/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface STMetrics : NSObject

{
    NSMutableSet *memoryUsageMetricsTypes;
    NSMutableDictionary *performanceMetricsEvents;
}

+ (id)sharedMetricsLogger;

- (id)init;
- (void)observeAndLogClientFlowPerformanceMetrics;
- (void)observeAndLogClientFlowMemoryUsageMetrics;

@end
