/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject

{
    NSMutableDictionary *metricsIndex;
    NSMutableSet *metricsSet;
}

- (id)init;
- (id)name;
- (void)reset;
- (_Bool)addMetrics:(id)arg1;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;
- (id)getMetricsByName:(id)arg1;

@end
