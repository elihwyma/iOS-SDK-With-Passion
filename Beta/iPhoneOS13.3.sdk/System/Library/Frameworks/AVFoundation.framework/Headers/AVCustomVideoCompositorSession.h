/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVVideoComposition, AVVideoCompositionRenderContext, AVWeakReference, NSDictionary, NSError;

@protocol AVVideoCompositing, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCustomVideoCompositorSession : NSObject

{
    struct OpaqueFigVideoCompositor *_figCustomCompositor;
    _Bool _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    AVWeakReference *_weakSelf;
    void *_callbackContextToken;
    NSObject<OS_dispatch_queue> *_videoCompositionQ;
    AVVideoComposition *_videoComposition;
    _Bool _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;
    id <AVVideoCompositing> _clientCustomCompositor;
    NSObject<OS_dispatch_queue> *_clientErrorQ;
    NSError *_clientError;
    NSObject<OS_dispatch_queue> *_renderContextQ;
    AVVideoCompositionRenderContext *_renderContext;
    NSObject<OS_dispatch_queue> *_finishedRequestQ;
}

@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;

+ (id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2;
+ (_Bool)_colorPropertiesAreSetInVideoComposition:(id)arg1;

- (void)dealloc;
- (void)setVideoComposition:(id)arg1;
- (id)customVideoCompositor;
- (_Bool)commitCustomVideoCompositorPropertiesAndReturnError:(id *)arg1;
- (void)detachVideoComposition;
- (id)getAndClearClientError;
- (struct OpaqueFigVideoCompositor *)_copyFigVideoCompositor;
- (void)_willDeallocOrFinalize;
- (id)initWithVideoComposition:(id)arg1;
- (int)_setupFigCallbacks;
- (_Bool)_validateSourcePixelBufferAttributes:(id)arg1 andReturnException:(id *)arg2;
- (_Bool)_validateRequiredPixelBufferAttributesForRenderContext:(id)arg1 andReturnException:(id *)arg2;
- (void)_cleanupFigCallbacks;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 didFinishWithComposedPixelBuffer:(struct __CVBuffer *)arg2;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 didFinishWithError:(id)arg2;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame *)arg1;
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 atTime:(CDStruct_1b6d18a9)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void *)arg4;
- (int)_customCompositorShouldAnticipateRenderingFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2 andThenFromTime:(CDStruct_1b6d18a9)arg3 toTime:(CDStruct_1b6d18a9)arg4;
- (int)_customCompositorShouldPrerollForRenderingFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2 andThenFromTime:(CDStruct_1b6d18a9)arg3 toTime:(CDStruct_1b6d18a9)arg4 requestID:(long long)arg5;
- (int)_customCompositorShouldCancelPendingFrames;
- (void)_customCompositorFigPropertyDidChange;

@end
