/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLRegressor.h>

@class MLPipeline;

@interface MLPipelineRegressor : MLRegressor

{
    MLPipeline *_engine;
}

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;

- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id *)arg4;

@end
