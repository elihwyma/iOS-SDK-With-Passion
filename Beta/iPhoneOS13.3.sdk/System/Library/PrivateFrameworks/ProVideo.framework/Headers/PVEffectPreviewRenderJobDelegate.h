/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString, PVEffect, PVRendererBase, PVVideoCompositingContext;

@interface PVEffectPreviewRenderJobDelegate : NSObject

{
    PVEffect *m_effect;
    CDStruct_1b6d18a9 m_time;
    struct CGImage *m_input;
    HGRef_265f9e4c m_inputHGNode;
    struct CGSize m_outputSize;
    CDUnknownBlockType m_completionHandler;
    PVRendererBase *m_pvRenderer;
    struct HGRef<HGCVBitmap> m_outputCVBitmap;
    struct PVImageProperties m_imageCreationProperties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned int)jobTypeTag;
+ (void)cleanupCaches;

- (void)dealloc;
- (id).cxx_construct;
- (int)jobPriority;
- (void)buildGraph:(vector_8c7095e0 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(vector_bfafc335 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (void)finishCompletedJob;
- (void)finishCancelledJob;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (unsigned long long)packedFamilyCode;
- (void)_setupInputHGNode:(const struct HGRenderContext *)arg1 frameStats:(struct FrameStats *)arg2;
- (struct CGImage *)_makeResultImage;
- (id)initWEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 inputImage:(struct CGImage *)arg3 outputSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5 pvRenderer:(id)arg6;

@end
