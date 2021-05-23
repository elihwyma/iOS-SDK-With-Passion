/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet;

@interface REFeatureMap : NSObject

{
    unsigned long long _hash;
    unsigned long long *_values;
    NSDictionary *_indices;
}

@property (nonatomic, readonly) unsigned long long featureCount;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, readonly) NSSet *allFeatures;
@property (nonatomic, readonly) NSArray *loggingValues;

+ (id)defaultFeatureName;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_count;
- (id)featureValueForName:(id)arg1;
- (unsigned long long)valueForFeature:(id)arg1;
- (void)removeAllValues;
- (id)initWithFeatureMap:(id)arg1;
- (void)setValue:(unsigned long long)arg1 forFeature:(id)arg2;
- (void)enumerateFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFeatureValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setFeatureValue:(id)arg1 forFeature:(id)arg2;
- (void)removeValueForFeature:(id)arg1;
- (id)featureValueForFeature:(id)arg1;
- (_Bool)hasValueForFeature:(id)arg1;
- (void)enumerateBoolFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInt64FeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDoubleFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStringFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEmptyFeaturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInt64FeaturesUsingIndexedBlock:(CDUnknownBlockType)arg1 emptyFeatureBlock:(CDUnknownBlockType)arg2;

@end
