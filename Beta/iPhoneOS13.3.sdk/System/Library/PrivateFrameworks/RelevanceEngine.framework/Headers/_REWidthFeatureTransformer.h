/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REWidthFeatureTransformer : REFeatureTransformer

{
    unsigned long long _mask;
    unsigned long long _width;
    unsigned long long _shift;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)_validateWithFeatures:(id)arg1;
- (id)initWithWidth:(unsigned long long)arg1 shift:(unsigned long long)arg2;

@end
