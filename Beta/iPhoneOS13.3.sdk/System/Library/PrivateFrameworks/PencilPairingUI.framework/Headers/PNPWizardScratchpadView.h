/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, NSMutableArray, NSString, NSTimer, PNPWizardInkWeightControl, PNPWizardScratchpadCanvasView, PNPWizardScratchpadToast;

@protocol PNPWizardScratchpadViewDelegate;

@interface PNPWizardScratchpadView : UIView

{
    UIView *_backgroundView;
    PNPWizardScratchpadCanvasView *_canvasView;
    PNPWizardScratchpadCanvasView *_fingerDrawingCanvasView;
    CAShapeLayer *_frameLayer;
    PNPWizardInkWeightControl *_inkWeightControl;
    _Bool _inkWeightControlVisible;
    long long _selectedInkIndex;
    long long _previousMarkingToolIndex;
    NSMutableArray *_inkViews;
    NSArray *_colors;
    UIView *_toolsBackgroundPillView;
    PNPWizardScratchpadToast *_toastView;
    NSTimer *_showToastTimer;
    _Bool _showingToast;
    _Bool _isDrawing;
    unsigned long long _step;
    id <PNPWizardScratchpadViewDelegate> _delegate;
}

@property (nonatomic) _Bool showingToast;
@property (nonatomic) _Bool isDrawing;
@property (nonatomic) unsigned long long step;
@property (weak, nonatomic) id <PNPWizardScratchpadViewDelegate> delegate;
@property (nonatomic, readonly) struct CGPoint pointForFirstTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)canvasViewDidBeginDrawing:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)_canvasViewWillBeginDrawing:(id)arg1;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(CDUnknownBlockType)arg2;
- (id)_selectedInkView;
- (id)_selectedInk;
- (void)_selectInkAtIndex:(long long)arg1;
- (void)_animateLayoutChange:(CDUnknownBlockType)arg1;
- (void)_deselectAllInks;
- (void)_animateInkChange:(CDUnknownBlockType)arg1;
- (void)_initializeToastViewIfNecessary;
- (_Bool)_viewIsPartOfStylusCanvasView:(id)arg1;
- (void)_dismissToastNotification;
- (void)_showToastNotificationAndAnimateStrokeAway;
- (void)_inkViewPressed:(id)arg1;
- (void)_triggerShowToastTimer;
- (void)_showToastNotificationWithInitialAnimation;
- (void)_animateAdjustmentSliderAppearance:(CDUnknownBlockType)arg1;
- (void)clearCanvas;
- (void)prepareCanvasViews;

@end
