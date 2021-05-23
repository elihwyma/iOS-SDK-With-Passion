/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, PKDrawingGestureRecognizer, PKInk, PKPaintAreaViewSurface;

@protocol PKPaintAreaViewDelegate;

@interface PKPaintAreaView : UIView

{
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKPaintAreaViewSurface *_currentPaintSurfaceObject;
    NSMutableArray *_liveSurfaces;
    _Bool _switchSurfacesDuringStrokes;
    _Bool _fingerDrawingEnabled;
    id <PKPaintAreaViewDelegate> _delegate;
    PKInk *_ink;
}

@property (nonatomic, readonly) struct CGAffineTransform strokeTransform;
@property (weak, nonatomic) id <PKPaintAreaViewDelegate> delegate;
@property (nonatomic) _Bool switchSurfacesDuringStrokes;
@property (nonatomic) _Bool fingerDrawingEnabled;
@property (retain, nonatomic) PKInk *ink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canAddStroke;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (CDStruct_f17e9403)drawingInputPoint:(struct CGPoint)arg1 forTouch:(id)arg2 predicted:(_Bool)arg3;
- (void)drawingBegan:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)drawingEnded:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (id)hitSurface:(struct CGPoint)arg1;
- (void)switchToNewPaintSurface:(id)arg1;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1 previousPoint:(struct CGPoint)arg2 newSurface:(id *)arg3;
- (void)vsync:(double)arg1;

@end
