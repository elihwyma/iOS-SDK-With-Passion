/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, PKCanvasView, PKInk, UIGestureRecognizer;

@protocol PKCanvasViewDelegate;

@interface PNPWizardScratchpadCanvasView : UIView

{
    NSMutableArray *_snapshotImageViews;
    PKInk *_ink;
    id <PKCanvasViewDelegate> _canvasViewDelegate;
    _Bool _showingSnapshot;
    PKCanvasView *_canvasView;
}

@property (nonatomic) _Bool showingSnapshot;
@property (weak, nonatomic) id <PKCanvasViewDelegate> delegate;
@property (nonatomic, readonly) PKCanvasView *canvasView;
@property (retain, nonatomic) PKInk *ink;
@property (nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_playClearAnimationWithImage:(id)arg1;
- (void)clearDrawingAnimated;
- (void)prepareCanvasView;

@end
