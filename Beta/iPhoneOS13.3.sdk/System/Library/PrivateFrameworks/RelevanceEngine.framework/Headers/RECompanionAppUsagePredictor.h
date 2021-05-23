/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSDictionary;

@interface RECompanionAppUsagePredictor : REPredictor

{
    NSDictionary *_predictions;
}

@property (nonatomic, readonly) NSDictionary *predictions;

+ (double)updateInterval;

- (void)dealloc;
- (id)_init;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)_loadStoreIfNeeded;

@end
