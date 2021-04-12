//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable>
{
    _UIStatusBarImageView *_bodyView;
    _UIStatusBarImageView *_shackleView;
    id /* CDUnknownBlockType */ _completionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) _UIStatusBarImageView *shackleView; // @synthesize shackleView=_shackleView;
@property(retain, nonatomic) _UIStatusBarImageView *bodyView; // @synthesize bodyView=_bodyView;
// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)jiggleWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)animateUnlockWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (CGSize)intrinsicContentSize;
- (void)resetLock;
@property(readonly, nonatomic) BOOL prefersBaselineAlignment;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

