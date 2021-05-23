/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REFeature.h>

@class NSArray, NSString, REFeatureSet;

@interface _RECrossedFeature : REFeature

{
    NSString *_name;
    unsigned long long _featureType;
    unsigned long long _bitCount;
    REFeatureSet *_dependentFeatures;
    unsigned long long _hash;
    NSArray *_features;
}

@property (nonatomic, readonly) NSArray *features;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)featureType;
- (id)initWithFeatures:(id)arg1;
- (long long)_bitCount;
- (id)_rootFeatures;
- (id)_dependentFeatures;
- (void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2;
- (void)_computeHash;
- (void)_updateFeaturesArray;

@end
