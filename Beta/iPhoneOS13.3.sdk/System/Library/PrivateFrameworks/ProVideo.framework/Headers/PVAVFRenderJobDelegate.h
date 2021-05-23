/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVAsynchronousVideoCompositionRequest, NSString, PVTaskToken, PVVideoCompositing, PVVideoCompositingContext, PVVideoCompositionInstruction;

@interface PVAVFRenderJobDelegate : NSObject

{
    PVVideoCompositing *m_compositor;
    AVAsynchronousVideoCompositionRequest *m_request;
    PVVideoCompositionInstruction *m_instruction;
    CDStruct_1b6d18a9 m_compositionTime;
    _Bool m_thumbnailCompositing;
    struct __CVBuffer *m_destinationPixelBuffer;
    unsigned int m_minimumRequestCompletionTimeMS;
    struct PerfTimer m_timer;
    unsigned int m_childCode;
    struct HGCVGLTextureFactory *m_hgCVGLTextureFactory;
    HGRef_9706a068 m_renderManager;
    HGRef_6bae45d3 m_instructionGraphContext;
    PVTaskToken *_token;
}

@property (readonly) CDStruct_1b6d18a9 compositionTime;
@property (readonly) PVVideoCompositionInstruction *compositionInstruction;
@property (readonly) AVAsynchronousVideoCompositionRequest *compositionRequest;
@property unsigned int minimumRequestCompletionTimeMS;
@property unsigned int childCode;
@property (retain) PVTaskToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned int)jobTypeTag;

- (id).cxx_construct;
- (int)jobPriority;
- (int)renderContextPriority;
- (void)buildGraph:(vector_8c7095e0 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(vector_bfafc335 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (void)finishCompletedJob;
- (void)finishCancelledJob;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (unsigned long long)packedFamilyCode;
- (void)_setupGLTextureFactory:(const struct HGRenderContext *)arg1;
- (void)_setupInputs:(PVInputHGNodeMap_cba5f928 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (void)_buildGraph:(PVInputHGNodeMap_cba5f928 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3 outputNodes:(vector_8c7095e0 *)arg4;
- (id)initWithCompositor:(id)arg1 request:(id)arg2 compositionTime:(CDStruct_1b6d18a9)arg3 thumbnailCompositing:(_Bool)arg4;

@end
