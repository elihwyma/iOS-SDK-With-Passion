/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSObject;

@protocol MLCustomModel;

__attribute__((visibility("hidden")))
@interface MLCustomModelWrapper : MLModel

{
    NSObject<MLCustomModel> *_customModel;
}

@property (retain) NSObject<MLCustomModel> *customModel;

- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3;

@end
