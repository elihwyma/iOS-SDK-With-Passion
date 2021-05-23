/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLClassifier.h>

@class MLPipeline;

@interface MLPipelineClassifier : MLClassifier

{
    MLPipeline *_engine;
}

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end
