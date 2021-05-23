/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIKBHandwritingView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokeView : UIView

{
    UIKBHandwritingView *_keyView;
    struct CGContext *_bitmapContext;
    double _scaleFactor;
    struct CGRect _aggregateInvalidRect;
}

@property (nonatomic, readonly) struct CGContext *bitmapContext;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGRect aggregateInvalidRect;
@property (weak, nonatomic) UIKBHandwritingView *keyView;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateInkColor;
- (void)createBitmapIfNeeded;
- (struct)viewPointFromDataPoint:(struct)arg1;
- (struct CGRect)handwritingPointToRect:(struct)arg1;
- (struct CGRect)convertRectToBitmapCoordinates:(struct CGRect)arg1;
- (struct CGRect)convertRectToViewCoordinates:(struct CGRect)arg1;
- (void)redrawStrokesInRect:(struct CGRect)arg1;
- (void)displayAggregateInvalidRect;
- (void)addTrapezoidFromFirstPoint:(struct)arg1 secondPoint:(struct)arg2;
- (void)addHandwritingPoint:(struct)arg1;
- (_Bool)_wantsDeepDrawing;
- (void)clearRect:(struct CGRect)arg1;

@end
