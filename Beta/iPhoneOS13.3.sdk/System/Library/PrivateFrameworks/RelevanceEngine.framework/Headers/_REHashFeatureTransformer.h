/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REHashFeatureTransformer : REFeatureTransformer

+ (id)functionName;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)_validateWithFeatures:(id)arg1;

@end
