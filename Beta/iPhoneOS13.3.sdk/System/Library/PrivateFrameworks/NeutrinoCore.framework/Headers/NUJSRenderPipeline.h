/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@class NSUUID, NUScript;

@interface NUJSRenderPipeline

{
    NUScript *_script;
    NSUUID *_identifier;
}

+ (id)extractFilterParams:(id)arg1 withPipelineState:(id)arg2 error:(out id *)arg3;
+ (id)renderPipelineWithJavaScript:(id)arg1;
+ (struct NSDictionary *)extractTransforms:(id)arg1 inputImages:(id)arg2 error:(out id *)arg3;

- (id)init;
- (id)initWithScript:(id)arg1;
- (id)_pipelineFunctionInContext:(id)arg1 error:(out id *)arg2;
- (id)_pipelineFunctionWithJavaScript:(id)arg1 sourceURL:(id)arg2 context:(id)arg3;
- (void)setUpContext:(id)arg1;
- (id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 context:(id)arg4 error:(out id *)arg5;

@end
