/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REBucketFeatureTransformer : REFeatureTransformer

{
    unsigned long long _count;
    long long _bitCount;
    unsigned long long _min;
    unsigned long long _max;
}

@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;

+ (id)functionName;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_outputType;
- (void)_updateConfigurationForCount:(unsigned long long)arg1;
- (void)configureWithInvocation:(id)arg1;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)_validateWithFeatures:(id)arg1;

@end
