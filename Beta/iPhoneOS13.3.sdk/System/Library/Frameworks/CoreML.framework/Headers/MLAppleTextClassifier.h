/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLAppleTextClassifierParameters, NSString;

@interface MLAppleTextClassifier : MLModel

{
    void *textClassifierModel;
    MLAppleTextClassifierParameters *_parameters;
}

@property (readonly) MLAppleTextClassifierParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (_Bool)saveAppleTextClassifierModelToURL:(id)arg1 textClassifierParameters:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end
