/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString, PVRenderRequest, PVRenderer, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject

{
    PVRenderer *m_pvRenderer;
    PVRenderRequest *m_request;
    HGRef_9706a068 m_renderManager;
    CDUnknownBlockType m_completionHandler;
    vector_bfafc335 *m_destinationBitmaps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;

+ (unsigned int)jobTypeTag;

- (void)dealloc;
- (id).cxx_construct;
- (int)jobPriority;
- (int)graphBuildThreadPriority;
- (int)renderContextPriority;
- (void)buildGraph:(vector_8c7095e0 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(vector_bfafc335 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (void)finishCompletedJob;
- (void)finishCancelledJob;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (unsigned long long)packedFamilyCode;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 pvRenderer:(id)arg3;

@end
