/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIResponder, UISelectionGrabber, UITextGestureTuning, UITextSelectionView, UITouch;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView

{
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    int m_mode;
    NSArray *m_rects;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    struct CGPoint m_initialPoint;
    struct CGRect m_startEdge;
    struct CGRect m_endEdge;
    struct CGPoint m_basePoint;
    struct CGPoint m_extentPoint;
    struct CGPoint m_initialBasePoint;
    struct CGPoint m_initialExtentPoint;
    double m_initialDistance;
    struct CGPoint m_touchOffset;
    double m_firstMovedTime;
    UIView *m_rectContainerView;
    UISelectionGrabber *m_startGrabber;
    UISelectionGrabber *m_endGrabber;
    UITextGestureTuning *m_gestureTuning;
    _Bool m_animateUpdate;
    _Bool m_baseIsStart;
    _Bool m_commandsWereShowing;
    _Bool m_willBeginMagnifying;
    _Bool m_inGesture;
    _Bool m_magnifying;
    _Bool m_scrolling;
    _Bool m_scaling;
    _Bool m_rotating;
    _Bool m_inputViewIsChanging;
    _Bool m_isClearingRange;
    _Bool m_shouldStayVisible;
}

@property (nonatomic) struct CGPoint initialPoint;
@property (nonatomic) struct CGRect startEdge;
@property (nonatomic) struct CGRect endEdge;
@property (nonatomic) struct CGPoint basePoint;
@property (nonatomic) struct CGPoint extentPoint;
@property (nonatomic) struct CGPoint initialBasePoint;
@property (nonatomic) double initialDistance;
@property (nonatomic) struct CGPoint touchOffset;
@property (nonatomic) double firstMovedTime;
@property (nonatomic) _Bool magnifying;
@property (nonatomic) _Bool isClearingRange;
@property (nonatomic) _Bool shouldStayVisible;
@property (retain, nonatomic) UITouch *activeTouch;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic, readonly) UIResponder<UITextInput> *container;
@property (nonatomic) int mode;
@property (retain, nonatomic) NSArray *rects;
@property (nonatomic, readonly) _Bool autoscrolled;
@property (nonatomic) _Bool inGesture;
@property (nonatomic) _Bool isScrolling;
@property (nonatomic) _Bool rotating;
@property (nonatomic) _Bool scaling;
@property (nonatomic) _Bool inputViewIsChanging;
@property (nonatomic) _Bool baseIsStart;
@property (nonatomic) _Bool commandsWereShowing;
@property (retain, nonatomic) UISelectionGrabber *startGrabber;
@property (retain, nonatomic) UISelectionGrabber *endGrabber;
@property (nonatomic) struct CGPoint initialExtentPoint;
@property (nonatomic) _Bool animateUpdate;
@property (nonatomic, readonly) struct CGPoint activeTouchPoint;
@property (nonatomic) _Bool willBeginMagnifying;

- (void)removeFromSuperview;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)startAnimating;
- (void)stopAnimating;
- (_Bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;
- (struct CGRect)_selectionClipRect;
- (void)willRotate;
- (void)didRotate;
- (void)_createGestureTuningIfNecessary;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)updateBaseAndExtentPointsFromEdges;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;
- (void)beginMagnifying;
- (struct CGPoint)magnifierPoint;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (void)cancelDelayedActions;
- (struct CGRect)_startEdgeHitRect;
- (struct CGRect)_endEdgeHitRect;
- (_Bool)_endIsHorizontal;
- (_Bool)_startIsHorizontal;
- (void)updateEdges;
- (_Bool)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;
- (void)setTouchOffset:(struct CGPoint)arg1 touchPoint:(struct CGPoint)arg2;
- (void)updateRectViews;
- (void)updateGrabbers;
- (void)updateAfterEffectiveModeChange;
- (void)updateDots;
- (void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(struct CGPoint)arg2;
- (void)animateHighlighterDelayedFadeInOnLayer:(id)arg1;
- (void)setMagnifierOrientation;
- (void)_cancelGrabberTransitionOutAnimations:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (void)willScroll;
- (void)didScroll;
- (void)scaleWillChange;
- (void)scaleDidChange;
- (void)inputViewWillChange;
- (void)inputViewDidChange;
- (void)clearRangeAnimated:(_Bool)arg1;
- (void)animateHighlighterExpanderAnimation;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;

@end
