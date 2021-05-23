/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject

{
    HGRef_9706a068 _renderManager;
    struct HGRef<HGRenderJob> _currentRenderJob;
    PVVideoCompositingContext *_compositingContext;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (HGRef_2925969f)rootContext;
- (HGRef_9706a068)renderManager;
- (void)enqueueRenderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getSharedEAGLContext;

@end
