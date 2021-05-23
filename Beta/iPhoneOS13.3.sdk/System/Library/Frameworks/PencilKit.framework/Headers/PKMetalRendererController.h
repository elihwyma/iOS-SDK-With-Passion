/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class CAMetalLayer, NSArray, NSMutableArray, PKLinedPaper, PKMetalRenderer, PKStrokeGenerator;

@protocol CAMetalDrawable, MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore, PKMetalRendererControllerDelegate;

@interface PKMetalRendererController : NSObject

{
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Atomic int _cancelLongRunningRenderingCount;
    _Atomic int _cancelAllRendering;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    struct atomic_flag _readyToBeginRender;
    _Atomic double _lastFrameDuration;
    _Atomic unsigned long long _lastPresentationTime;
    _Atomic int _queuedRenders;
    NSMutableArray *_postPresentCallbacks;
    _Bool _isTorndown;
    struct CGSize _pixelSize;
    struct CGSize _actualSize;
    double _presentationCount;
    double _presentationDelay;
    double _presentationDelayGrowth;
    double _presentationMaxDelay;
    CDUnknownBlockType _vSyncTimeoutBlock;
    struct PKRunningStat _strokeLatencyStat;
    id <MTLTexture> _currentTextureTarget;
    id <CAMetalDrawable> _currentDrawable;
    struct CGImage *_paperTextureImage;
    _Bool _liveStrokeMode;
    id <PKMetalRendererControllerDelegate> _delegate;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    NSArray *_liveStrokeStrokes;
    double _liveStrokeElapsedTime;
    double _liveStrokeDuration;
    CAMetalLayer *_presentationLayer;
    PKMetalRenderer *_renderer;
    double _inputScale;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
    struct CGAffineTransform _renderTransform;
}

@property (retain, nonatomic) PKMetalRenderer *renderer;
@property struct CGAffineTransform renderTransform;
@property double inputScale;
@property (weak, nonatomic) id <PKMetalRendererControllerDelegate> delegate;
@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderQueue;
@property (nonatomic) struct CGAffineTransform strokeTransform;
@property (nonatomic, readonly) PKStrokeGenerator *inputController;
@property (nonatomic) double backboardPaperMultiply;
@property (retain, nonatomic) PKLinedPaper *linedPaper;
@property (nonatomic) struct CGRect viewScissor;
@property (nonatomic) struct CGAffineTransform paperTransform;
@property (nonatomic, readonly) struct CGSize actualSize;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic) _Bool liveStrokeMode;
@property (copy, nonatomic) NSArray *liveStrokeStrokes;
@property (nonatomic) double liveStrokeElapsedTime;
@property (nonatomic) double liveStrokeDuration;
@property (weak, nonatomic) CAMetalLayer *presentationLayer;
@property (nonatomic) _Bool invertColors;

- (void)dealloc;
- (void)clear;
- (id).cxx_construct;
- (void)teardown;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setup;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(_Bool)arg4;
- (void)cancelAllRendering;
- (void)cancelLongRunningRenders;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderTilesIntoTiles:(id)arg1;
- (_Bool)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGImage *)newCGImage;
- (void)flushMemoryIfPossible;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)replaceInkTexture:(id)arg1 image:(struct CGImage *)arg2;
- (void)setPaperTextureImage:(struct CGImage *)arg1;
- (void)setLiveRenderingOverrideColor:(struct CGColor *)arg1;
- (void)setResourceCacheSize:(unsigned long long)arg1;
- (void)setPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (void)purgeOriginalBackFramebuffer;
- (void)cancelVSyncTimeoutBlock;
- (_Bool)prerenderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)didFinishRendering:(CDUnknownBlockType)arg1;
- (void)changeRenderSize;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)drawingCancelled;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)testLiveStrokeToFrame:(struct CGRect)arg1 texture:(struct CGImage *)arg2 strokeInterval:(float)arg3;
- (void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2;
- (_Bool)isAllRenderingCancelled;
- (void)resumeLongRunningRenders;
- (void)setupSync;
- (unsigned long long)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 progress:(id)arg5;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 renderCompletion:(CDUnknownBlockType)arg5;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (_Bool)isLongRunningRenderingCancelled;
- (void)_renderAndPresent:(_Bool)arg1 withTransform:(struct CGAffineTransform)arg2;
- (_Bool)setupCurrentDrawable;
- (void)_present:(double)arg1;
- (_Bool)_renderAheadWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)_renderDrawPoints;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)pokeEventDispatcher;
- (void)teardownSync;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (struct CGImage *)renderStrokesSync:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (void)copyIntoTiles:(id)arg1;
- (void)drawTexture:(id)arg1;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;

@end
