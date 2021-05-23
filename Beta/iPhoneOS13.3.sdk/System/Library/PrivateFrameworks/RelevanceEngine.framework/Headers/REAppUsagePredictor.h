/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class RETimeline;

@interface REAppUsagePredictor : REPredictor

{
    RETimeline *_timeline;
}

@property (nonatomic, readonly) RETimeline *timeline;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;

@end
