/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLAppleGazetteerParameters, NSString;

@interface MLAppleGazetteer : MLModel

{
    void *gazetteerModel;
    MLAppleGazetteerParameters *_parameters;
}

@property (readonly) MLAppleGazetteerParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (_Bool)saveAppleGazetteerModelToURL:(id)arg1 gazetteerParameters:(id)arg2 error:(id *)arg3;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end
