/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLMultiArray;

@protocol MLFeatureProvider;

@interface MLRegressorResult : NSObject

{
    MLMultiArray *_predictedValue;
    id <MLFeatureProvider> _additionalFeatures;
}

@property (readonly) MLMultiArray *predictedValue;
@property (readonly) id <MLFeatureProvider> additionalFeatures;

+ (id)resultWithValue:(id)arg1;
+ (id)resultWithValue:(id)arg1 additionalFeatures:(id)arg2;

- (id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1;
- (id)initWithValue:(id)arg1 additionalFeatures:(id)arg2;

@end
