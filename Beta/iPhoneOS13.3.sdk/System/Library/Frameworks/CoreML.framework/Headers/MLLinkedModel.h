/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSString;

@interface MLLinkedModel : MLModel

{
    MLModel *_linkedModel;
    NSString *_modelFileName;
    NSString *_modelSearchPath;
}

@property (retain) MLModel *linkedModel;
@property (retain) NSString *modelFileName;
@property (retain) NSString *modelSearchPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)findFile:(id)arg1 inSearchPath:(id)arg2 basePath:(id)arg3;
+ (_Bool)areFeaturesIn:(id)arg1 modelNamed:(id)arg2 aSubsetOf:(id)arg3 error:(id *)arg4;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)updateParameterDescriptionsByUnarchivingSpecification:(const struct LinkedModelFile *)arg1;
- (id)initWithLinkedModel:(id)arg1 modelFileName:(id)arg2 modelSearchPath:(id)arg3 configuration:(id)arg4;

@end
