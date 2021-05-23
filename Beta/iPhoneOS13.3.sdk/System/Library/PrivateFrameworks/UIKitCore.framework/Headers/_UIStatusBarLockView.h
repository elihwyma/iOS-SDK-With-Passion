/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIAccessibilityHUDItem, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockView : UIView

{
    _UIStatusBarImageView *_bodyView;
    _UIStatusBarImageView *_shackleView;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) _UIStatusBarImageView *bodyView;
@property (retain, nonatomic) _UIStatusBarImageView *shackleView;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)applyStyleAttributes:(id)arg1;
- (void)animateUnlockWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetLock;
- (void)jiggleWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
