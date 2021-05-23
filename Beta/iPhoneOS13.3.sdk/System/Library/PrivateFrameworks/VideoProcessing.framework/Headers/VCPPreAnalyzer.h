/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class PVSceneTaxonomy;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPPreAnalyzer : NSObject

{
    PVSceneTaxonomy *_sceneTaxonomy;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct CF<__CVPixelBufferPool *> _pool32BGRA;
    struct CF<__CVPixelBufferPool *> _pool8Y;
    struct CF<OpaqueVTPixelTransferSession *> _transferSession;
}

+ (_Bool)_allowANE;
+ (_Bool)_enableSceneAssetConcurrency;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withPixelFormat:(unsigned int)arg2;
- (int)_loadAndScaleThumbnailWithImageURL:(id)arg1 toScaled32BGRABuffer:(struct __CVBuffer **)arg2;
- (int)_convertFromBuffer:(struct __CVBuffer *)arg1 toLumaPixelBuffer:(struct __CVBuffer **)arg2;
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;
- (void)_generateSceneClassifications:(id)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3;
- (int)_createAestheticsRequest:(id *)arg1 andClassificationRequest:(id *)arg2 andSceneprintRequest:(id *)arg3 andJunkImageRequest:(id *)arg4 andSaliencyImageRequest:(id *)arg5;
- (int)_collectSceneAnalysisResults:(id *)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3 andAestheticsResults:(id)arg4 andSaliencyResults:(id)arg5 andSceneprintResults:(id)arg6;
- (int)_performSceneAnalysis:(id *)arg1 withRequestHandler:(id)arg2;
- (int)_performBlurAnalysis:(id *)arg1 withBuffer:(struct __CVBuffer *)arg2 andIsSDOF:(_Bool)arg3;
- (int)_performExposureAnalysis:(id *)arg1 withBuffer:(struct __CVBuffer *)arg2;
- (int)_loadImageURL:(id)arg1 isPano:(_Bool)arg2 withRequestHandler:(id *)arg3 andLumaPixelBuffer:(struct __CVBuffer **)arg4;
- (int)_performAnalysis:(id *)arg1 isSDOF:(_Bool)arg2 withRequestHandler:(id)arg3 andLumaPixelBuffer:(struct __CVBuffer *)arg4;
- (void)analyzeWithImageURL:(id)arg1 isPano:(_Bool)arg2 isSDOF:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
