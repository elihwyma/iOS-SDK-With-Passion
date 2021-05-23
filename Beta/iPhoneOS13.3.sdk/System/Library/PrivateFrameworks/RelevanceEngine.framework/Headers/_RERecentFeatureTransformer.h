/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeatureTransformer.h>

@class REFeatureValueCounter;

@interface _RERecentFeatureTransformer : REFeatureTransformer

{
    REFeatureValueCounter *_counter;
    unsigned long long _bitCount;
}

+ (id)functionName;
+ (_Bool)supportsPersistence;
+ (_Bool)supportsInvalidation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (unsigned long long)_outputType;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (void)_updateConfigurationForCount:(unsigned long long)arg1;
- (void)configureWithInvocation:(id)arg1;
- (long long)_bitCount;
- (unsigned long long)_featureCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)_validateWithFeatures:(id)arg1;

@end
