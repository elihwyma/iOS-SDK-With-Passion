/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class CIContext, NSMutableArray, NSMutableSet, NSString, NSUUID, PKController, PKPaintAreaView;

@protocol OS_dispatch_queue, PKPaintSurface;

@interface PKPaintAreaViewSurface : NSObject

{
    PKController *_drawingController;
    NSMutableArray *_textureSet;
    struct CGSize _pixelSize;
    struct CGPoint _oldEraseLocation;
    CIContext *_imageContext;
    _Bool _isDrawing;
    _Bool _allowLiveInteraction;
    _Bool _waitingForStrokeToEnd;
    _Bool _isErasingObjects;
    _Bool _isMipmapped;
    NSMutableArray *_strokesToErase;
    NSMutableSet *_strokeIDsToErase;
    PKPaintAreaView *_paintAreaView;
    id <PKPaintSurface> _surface;
    double _textureScale;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSUUID *_drawingUUID;
    struct CGSize _drawingSize;
    struct CGPoint _previousPoint;
    struct CGAffineTransform _strokeTransform;
}

@property (nonatomic) _Bool isDrawing;
@property _Bool allowLiveInteraction;
@property (nonatomic, readonly) _Bool waitingForStrokeToEnd;
@property (nonatomic, readonly) _Bool isErasingObjects;
@property (nonatomic, readonly) NSMutableArray *strokesToErase;
@property (nonatomic, readonly) NSMutableSet *strokeIDsToErase;
@property (nonatomic, readonly) PKController *drawingController;
@property (weak, nonatomic) PKPaintAreaView *paintAreaView;
@property (nonatomic, readonly) id <PKPaintSurface> surface;
@property (nonatomic, readonly) struct CGSize drawingSize;
@property (nonatomic, readonly) double textureScale;
@property (nonatomic, readonly) struct CGAffineTransform strokeTransform;
@property (nonatomic, readonly) _Bool isMipmapped;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSUUID *drawingUUID;
@property (nonatomic) struct CGPoint previousPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setNeedsDrawingDisplay;
- (void)drawingChanged:(id)arg1;
- (void)eraserCancelled;
- (void)drawingCancelled;
- (void)eraseStrokesForPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2;
- (void)_didFinishErasingStrokes:(_Bool)arg1;
- (void)metalRendererController:(id)arg1 didCommitRenderingIntoTexture:(id)arg2;
- (id)nextTextureTargetForMetalRendererController:(id)arg1;
- (void)drawingEndedWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPaintSurface:(id)arg1 dispatchQueue:(id)arg2;
- (void)vsync:(double)arg1;
- (void)drawingBegan:(id)arg1 transformedLocation:(struct CGPoint)arg2;
- (void)eraserMoved:(id)arg1 transformedLocation:(struct CGPoint)arg2;
- (void)dispatchSyncOnSurfaceQueue:(CDUnknownBlockType)arg1;
- (void)_setupPKController;
- (id)CIImageFromTexture:(id)arg1;
- (_Bool)eraserBegan:(id)arg1 transformedLocation:(struct CGPoint)arg2;
- (void)eraserEnded;

@end
