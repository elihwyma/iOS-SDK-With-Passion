/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor;

@protocol DKInkRendererDelegate;

__attribute__((visibility("hidden")))
@interface DKInkRendererCG : UIView

{
    _Bool scaleDrawingToFitCanvas;
    _Bool drawingEnabled;
    UIColor *inkColor;
    id <DKInkRendererDelegate> delegate;
    double drawingScale;
    unsigned long long mode;
    NSMutableArray *_cachedInterpolatedBrushStrokes;
    NSMutableArray *_currentInterpolatedBrushStroke;
    struct CGRect _invalidRect;
}

@property (nonatomic) struct CGRect invalidRect;
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes;
@property (retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke;
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
- (id)initWithCoder:(id)arg1;
- (void)flush;
- (id)snapshot;
- (void)teardown;
- (void)_commonInit;
- (void)addPoint:(CDStruct_09aaf5d3)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)force;
- (void)endStroke;
- (void)beginStroke;
- (void)display;
- (void)removeLastStroke;
- (void)resetRendererState;
- (void)completeAnimationsImmediately;

@end
