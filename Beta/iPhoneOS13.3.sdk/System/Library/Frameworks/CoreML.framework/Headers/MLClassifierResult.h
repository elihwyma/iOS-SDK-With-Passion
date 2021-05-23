/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLFeatureValue, NSDictionary;

@protocol MLFeatureProvider;

@interface MLClassifierResult : NSObject

{
    MLFeatureValue *_predictedClass;
    NSDictionary *_classProbability;
    long long _predictedClassFeatureType;
    id <MLFeatureProvider> _additionalFeatures;
}

@property (readonly) MLFeatureValue *predictedClass;
@property (readonly) NSDictionary *classProbability;
@property (readonly) long long predictedClassFeatureType;
@property (readonly) id <MLFeatureProvider> additionalFeatures;

+ (id)resultWithStringClassProbability:(id)arg1;
+ (id)resultWithIntClassProbability:(id)arg1;
+ (id)resultWithStringClassProbability:(id)arg1 additionalFeatures:(id)arg2;
+ (id)resultWithIntClassProbability:(id)arg1 additionalFeatures:(id)arg2;
+ (id)resultWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3;

- (id)asFeatureDictionaryWithPredictedClassDescription:(id)arg1 classProbabilityDescription:(id)arg2;
- (id)initWithStringClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3;
- (id)initWithIntClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3;
- (id)initWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3;

@end
