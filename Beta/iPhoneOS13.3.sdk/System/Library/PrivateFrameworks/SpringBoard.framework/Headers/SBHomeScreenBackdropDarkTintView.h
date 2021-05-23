/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHomeScreenBackdropViewBase.h>

@class UIView;

@interface SBHomeScreenBackdropDarkTintView : SBHomeScreenBackdropViewBase

{
    UIView *_darkTintView;
}

- (_Bool)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)_updateDarkTintViewHidden;

@end
