/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString, UIView, _UIExpandingGlyphsView, _UIStatusBarLockItemPadlockView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLockItemView : UIStatusBarItemView

{
    _Bool _alongsideViewIsBecomingVisible;
    int _animationCount;
    UIView *_viewToAnimateAlongside;
    _UIStatusBarLockItemPadlockView *_padlockView;
    UIView *_textClippingView;
    _UIExpandingGlyphsView *_textView;
    double _padlockViewCenterOffsetFromForegroundViewCenter;
    UIView *_timeItemSnapshot;
    double _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
    double _widthNeededDuringAnimation;
    double _widthNeededForFinalState;
    CDUnknownBlockType _animationCompletionBlock;
}

@property (retain, nonatomic) _UIStatusBarLockItemPadlockView *padlockView;
@property (retain, nonatomic) UIView *textClippingView;
@property (retain, nonatomic) _UIExpandingGlyphsView *textView;
@property (nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter;
@property (retain, nonatomic) UIView *timeItemSnapshot;
@property (nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property (nonatomic) double widthNeededDuringAnimation;
@property (nonatomic) double widthNeededForFinalState;
@property (nonatomic) int animationCount;
@property (copy, nonatomic) CDUnknownBlockType animationCompletionBlock;
@property (weak, nonatomic) UIView *viewToAnimateAlongside;
@property (nonatomic) _Bool alongsideViewIsBecomingVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)lockSlideAnimationDuration;

- (_Bool)_isAnimating;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)accessibilityHUDRepresentation;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)updateContentsAndWidth;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_beginAnimation;
- (void)_endAnimation;
- (_Bool)isExclusive;
- (void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
