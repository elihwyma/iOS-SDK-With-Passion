/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PKDrawing, PKMetalRendererController, PKStrokeGenerator;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, PKControllerDelegate;

@interface PKController : NSObject

{
    NSArray *_renderedStrokes;
    NSMutableArray *_mutableRenderedStrokes;
    _Bool _liveInteraction;
    _Bool _invertColors;
    _Bool _previewsSuspended;
    _Bool _isMetal;
    NSObject<PKControllerDelegate> *_delegate;
    PKMetalRendererController *_rendererController;
    PKDrawing *_drawing;
    NSObject<OS_dispatch_semaphore> *_interactSemaphore;
    NSObject<OS_dispatch_queue> *_interactQueue;
    NSObject<OS_dispatch_queue> *_previewQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    double _timeToRender;
    double _totalTiles;
    double _totalStrokes;
}

@property (retain, nonatomic) PKMetalRendererController *rendererController;
@property (retain, nonatomic) PKDrawing *drawing;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore;
@property (nonatomic) _Bool previewsSuspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property _Bool liveInteraction;
@property (nonatomic) double timeToRender;
@property (nonatomic) double totalTiles;
@property (nonatomic) double totalStrokes;
@property (nonatomic) _Bool isMetal;
@property (weak, nonatomic) NSObject<PKControllerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *renderedStrokes;
@property (nonatomic, readonly) PKStrokeGenerator *inputController;
@property (nonatomic) _Bool invertColors;

+ (void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id *)arg3 redrawAllInRect:(struct CGRect *)arg4;

- (id)init;
- (void)teardown;
- (void)imageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(_Bool)arg4;
- (void)_didUpdateMutableRenderedStrokes;
- (void)resumePreviews;
- (void)cancelLongRunningRenders;
- (void)_renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_loadInitialDrawing:(id)arg1 withImage:(struct CGImage *)arg2 andMask:(struct CGImage *)arg3;
- (_Bool)_updateFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_drawingChanged;
- (void)_renderStrokes:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAsyncInteractBlock:(CDUnknownBlockType)arg1;
- (void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyCommands:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_applyCommands:(id)arg1 interactCompletion:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didRenderStrokes:(id)arg1;
- (void)removeStrokesInRect:(struct CGRect)arg1 from:(id)arg2;
- (id)strokes:(id)arg1 updateWithAdditionalStrokes:(id)arg2;
- (void)_renderAllStrokes:(id)arg1 clipRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didStartLiveInteractionWith:(id)arg1;
- (void)didEndLiveInteraction;
- (void)suspendPreviews;
- (void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform)arg3 setupComplete:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)updateDrawing;
- (void)hideStrokesWithoutUpdating:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDrawingWithErasedStrokes:(id)arg1;
- (void)updateDrawingFrom:(id)arg1;
- (void)applyCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(struct CGRect)arg5 completion:(CDUnknownBlockType)arg6;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)renderStrokes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderTilesIntoTiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)callbackAfterTileGeneration:(CDUnknownBlockType)arg1;
- (void)renderStrokes:(id)arg1 additionalStrokes:(id)arg2 intoTile:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(CDUnknownBlockType)arg2;

@end
