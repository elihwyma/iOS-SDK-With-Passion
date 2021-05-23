/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RECondition.h>

@interface _RETrueConstantCondition : RECondition

+ (id)sharedInstance;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_notCondition;
- (_Bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id *)arg3;
- (id)_inflectionFeatureValuePairs;

@end
