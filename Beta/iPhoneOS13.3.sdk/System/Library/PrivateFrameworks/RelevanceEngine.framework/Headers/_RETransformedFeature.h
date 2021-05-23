/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeature.h>

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature : REFeature

{
    NSString *_name;
    unsigned long long _hash;
    REFeatureSet *_features;
    REFeatureTransformer *_transformer;
}

@property (nonatomic, readonly) REFeatureSet *features;
@property (nonatomic, readonly) REFeatureTransformer *transformer;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)featureType;
- (long long)_bitCount;
- (id)_rootFeatures;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (id)initWithTransformer:(id)arg1 features:(id)arg2;
- (void)_computeHash;

@end
