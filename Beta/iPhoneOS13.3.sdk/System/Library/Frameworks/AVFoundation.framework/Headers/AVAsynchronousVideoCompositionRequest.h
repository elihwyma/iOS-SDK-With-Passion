/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsynchronousVideoCompositionRequestInternal, AVVideoCompositionRenderContext, NSArray;

@protocol AVVideoCompositionInstruction;

@interface AVAsynchronousVideoCompositionRequest : NSObject

{
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}

@property (nonatomic, readonly) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic, readonly) CDStruct_1b6d18a9 compositionTime;
@property (nonatomic, readonly) NSArray *sourceTrackIDs;
@property (nonatomic, readonly) id <AVVideoCompositionInstruction> videoCompositionInstruction;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishWithError:(id)arg1;
- (void)_willDeallocOrFinalize;
- (void)finishWithComposedVideoFrame:(struct __CVBuffer *)arg1;
- (void)finishCancelledRequest;
- (struct __CVBuffer *)sourceFrameByTrackID:(int)arg1;
- (id)initUsingSession:(id)arg1 withRenderContext:(id)arg2 compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg3 atTime:(CDStruct_1b6d18a9)arg4 usingSources:(id)arg5 instruction:(id)arg6;
- (struct OpaqueFigVideoCompositorFrame *)compositionFrame;

@end
