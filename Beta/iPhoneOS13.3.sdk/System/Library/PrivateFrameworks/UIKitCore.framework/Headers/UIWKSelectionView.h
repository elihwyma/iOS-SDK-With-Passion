/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWebSelectionView.h>

@class UIView, UIWebSelectionHandle;

@protocol UIWKInteractionViewProtocol;

__attribute__((visibility("hidden")))
@interface UIWKSelectionView : UIWebSelectionView

{
    UIView<UIWKInteractionViewProtocol> *_interactionView;
    UIWebSelectionHandle *_handle;
    _Bool _thresholdIsValid;
    _Bool _usingGesture;
    struct CGPoint _lastTouchPoint;
}

- (struct CGRect)visibleRect;
- (void)selectionChanged;
- (id)initWithView:(id)arg1;
- (void)clearSelection;
- (void)updateSelectionRects;
- (id)selectionRects;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)showControls;
- (void)selectionCreationStartedWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationEndedWithPoint:(struct CGPoint)arg1;
- (struct CGRect)unobscuredRect;
- (_Bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (struct CGRect)fetchSelectionBoundingRect;
- (void)updateRangedSelectionData;
- (void)updateTextRangeViewSelectionRects;
- (void)showCopyCalloutWithAnimation:(_Bool)arg1;
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

@end
