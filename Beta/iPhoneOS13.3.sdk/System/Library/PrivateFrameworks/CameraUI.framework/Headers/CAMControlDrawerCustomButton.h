/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerButton.h>

@class UIView;

@protocol CAMControlDrawerExpandableButtonDelegate;

@interface CAMControlDrawerCustomButton : CAMControlDrawerButton

{
    _Bool _expanded;
    _Bool __touchInTrackedView;
    id <CAMControlDrawerExpandableButtonDelegate> _delegate;
    UIView *__highlightedView;
    struct UIEdgeInsets _expansionInsets;
}

@property (nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) _Bool _touchInTrackedView;
@property (retain, nonatomic, setter=_setHighlightedView:) UIView *_highlightedView;
@property (nonatomic, readonly, getter=isSelfExpanding) _Bool selfExpanding;
@property (nonatomic) struct UIEdgeInsets expansionInsets;
@property (weak, nonatomic) id <CAMControlDrawerExpandableButtonDelegate> delegate;
@property (nonatomic, getter=isExpanded) _Bool expanded;

- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)isExpandable;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2 shouldNotify:(_Bool)arg3;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (_Bool)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (_Bool)shouldScaleImageWhileHighlighted;
- (_Bool)_shouldTrackView:(id)arg1 forTouchAtLocation:(struct CGPoint)arg2;
- (void)_updateHighlightedView;
- (_Bool)_shouldRejectAccessibilityGestureForHUDManager:(id)arg1;

@end
