/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <GLKit/GLKView.h>

@class DKOpenGLRenderer, NSMutableArray, NSString, UIColor;

@protocol DKInkRendererDelegate;

__attribute__((visibility("hidden")))
@interface DKInkRendererGL : GLKView

{
    UIColor *_inkColor;
    NSMutableArray *_brushPointQueue;
    NSMutableArray *_brushStrokes;
    NSMutableArray *_currentBrushStroke;
    _Bool _initialized;
    double _backingScale;
    DKOpenGLRenderer *_inkRenderer;
    _Bool _needToNotify;
    _Bool scaleDrawingToFitCanvas;
    _Bool drawingEnabled;
    id <DKInkRendererDelegate> delegate;
    double _drawingScale;
    unsigned long long _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *inkColor;
@property (weak, nonatomic) id <DKInkRendererDelegate> delegate;
@property (nonatomic) _Bool scaleDrawingToFitCanvas;
@property (nonatomic) double drawingScale;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool drawingEnabled;
@property (nonatomic, readonly) _Bool supportsBleedAnimation;
@property (nonatomic, readonly) _Bool initialized;
@property (nonatomic, readonly) unsigned long long maximumPointsForBleedAnimation;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (id)snapshot;
- (void)teardown;
- (void)_commonInit;
- (void)addPoint:(CDStruct_09aaf5d3)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)canBecomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)force;
- (void)endStroke;
- (void)beginStroke;
- (void)display;
- (void)removeLastStroke;
- (void)resetRendererState;
- (void)completeAnimationsImmediately;
- (void)displayForcefully;
- (void)addPointsFromBrushPointQueueWithSegmentLength:(unsigned long long)arg1;
- (void)rendererDidFinishAnimatingDrawing:(id)arg1;

@end
