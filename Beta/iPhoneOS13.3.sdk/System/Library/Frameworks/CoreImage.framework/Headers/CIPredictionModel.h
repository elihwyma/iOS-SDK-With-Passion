/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class MLModel, NSSet;

__attribute__((visibility("hidden")))
@interface CIPredictionModel : NSObject

{
    struct __CVBuffer *imageBuffer;
    MLModel *_model;
    struct CIPredictionModelImageFeatures _inputImageFeatures;
    struct CIPredictionModelImageFeatures _outputImageFeatures;
}

@property (retain, nonatomic) MLModel *model;
@property (nonatomic) struct CIPredictionModelImageFeatures inputImageFeatures;
@property (nonatomic) struct CIPredictionModelImageFeatures outputImageFeatures;
@property (nonatomic, readonly) NSSet *featureNames;

- (void)dealloc;
- (_Bool)processInputModel:(id)arg1;
- (_Bool)processInputFeatureWithName:(id)arg1 featureDescription:(id)arg2;
- (_Bool)processOutputFeatureWithName:(id)arg1 featureDescription:(id)arg2;
- (id)featureValueForName:(id)arg1;
- (id)initWithModel:(id)arg1;
- (struct __CVBuffer *)predictUsingInputBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;

@end
