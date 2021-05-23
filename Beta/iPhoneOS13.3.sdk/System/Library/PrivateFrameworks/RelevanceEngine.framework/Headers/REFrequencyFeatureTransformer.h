/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureTransformer.h>

@interface REFrequencyFeatureTransformer : REFeatureTransformer

+ (id)frequencyTransformWithCount:(unsigned long long)arg1 minimumValidCount:(long long)arg2;
+ (id)frequencyTransformWithCount:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)increaseCountForFeatureValue:(id)arg1;

@end
