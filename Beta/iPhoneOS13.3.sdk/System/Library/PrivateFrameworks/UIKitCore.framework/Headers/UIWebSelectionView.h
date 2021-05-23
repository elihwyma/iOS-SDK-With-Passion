/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSTimer, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionHandle, UIWebSelectionNode, UIWebSelectionOutline, UIWebTextRangeView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView

{
    UIView *_center;
    struct CGRect _selectionFrame;
    UIWebSelectionHandle *_top;
    UIWebSelectionHandle *_right;
    UIWebSelectionHandle *_bottom;
    UIWebSelectionHandle *_left;
    UIWebSelectionOutline *_outline;
    UIWebTextRangeView *_textRangeView;
    UIWebDocumentView *_documentView;
    UIWebSelectionNode *_selectionNode;
    UIWebSelectionGraph *_selectionGraph;
    double _growThreshold;
    double _shrinkThreshold;
    struct {
        UIWebSelectionHandle *scrollingHandle;
        double startTime;
        int direction;
        NSTimer *timer;
    } _autoscrollData;
    struct {
        UIWebSelectionHandle *start;
        UIWebSelectionHandle *end;
        struct CGSize startingOffset;
        _Bool anchorAtStart;
        struct {
            _Bool flipPossible;
            _Bool rectsChanged;
            struct CGRect originalSelectionRect;
        } flipData;
    } _rangedSelectionData;
    int _nestedLayoutCalls;
    _Bool _calloutBarIsHiddenBeforeRotation;
    _Bool _rotating;
    int _selectionInFixedPosition;
    _Bool _creatingSelection;
}

@property (retain, nonatomic) UIWebSelectionNode *selectionNode;
@property (nonatomic) struct CGRect selectionFrame;
@property (nonatomic, readonly) UIWebSelection *selection;
@property (nonatomic) _Bool creatingSelection;

- (void)dealloc;
- (id)handles;
- (struct CGRect)visibleRect;
- (void)removeFromSuperview;
- (void)selectionChanged;
- (void)_didScroll;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearSelection;
- (void)stopAnyAutoscrolling;
- (void)autoscrollTimerFired:(id)arg1;
- (void)updateSelectionRects;
- (void)layoutChangedByScrolling:(_Bool)arg1;
- (void)willStartScrollingOverflow;
- (void)didEndScrollingOverflow;
- (void)showControls;
- (id)initWithWebDocumentView:(id)arg1;
- (_Bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (struct CGRect)fetchSelectionBoundingRect;
- (void)updateTextRangeViewSelectionRects;
- (void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2;
- (void)updateAutoscrollForHandle:(id)arg1;
- (void)showCopyCalloutWithAnimation:(_Bool)arg1;
- (void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2;
- (void)hideControls;
- (_Bool)isHorizontalWritingMode;
- (void)resetSelection;
- (void)updateFrameAndHandlesWithAnimation:(_Bool)arg1;
- (void)showRangeSelection;
- (id)tintView;
- (struct CGRect)selectionBoundingRect;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (id)scroller;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(_Bool)arg1;
- (void)onAfterScrollOrZoomShowingSelection:(_Bool)arg1;
- (void)scaleChanged;
- (void)willStartScrollingOrZoomingPage;
- (void)didEndScrollingOrZoomingPage;
- (void)hideControlsBeforeRotation;
- (void)showControlsAfterRotation;
- (id)handleWithPosition:(int)arg1;
- (void)hideCopyCallout;
- (struct CGRect)fetchSelectionBoundingTextSelectionRect;
- (void)considerFlipping;
- (int)autoscrollDirectionsForHandle:(id)arg1;
- (void)shiftWebRangeSelectionAnimationDidStop;
- (id)nodeInPristineGraphAtPoint:(struct CGPoint)arg1;
- (id)activeHandle;
- (_Bool)activelyManipulatingTextSelectionHandle;
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
- (void)calloutBar:(id)arg1 selectedCommand:(id)arg2;
- (void)setSelectionFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)canFlip;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;

@end
