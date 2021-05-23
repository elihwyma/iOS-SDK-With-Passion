/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class CALayer, NSString, UILabel;

@interface ICPasswordLockTileView : UIView

{
    _Bool _isLocked;
    CALayer *_lockHandle;
    CALayer *_lockBase;
    CALayer *_lockGroupLayer;
    CALayer *_backdropLayer;
    UILabel *_label;
    UIView *_containerView;
    CDUnknownBlockType _fadeInCompletionHandler;
    CDUnknownBlockType _fadeOutCompletionHandler;
}

@property (retain, nonatomic) CALayer *lockHandle;
@property (retain, nonatomic) CALayer *lockBase;
@property (retain, nonatomic) CALayer *lockGroupLayer;
@property (retain, nonatomic) CALayer *backdropLayer;
@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) _Bool isLocked;
@property (copy, nonatomic) CDUnknownBlockType fadeInCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType fadeOutCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)lockTileView;

- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)awakeFromNib;
- (id)fadeAnimationWithStartAlpha:(double)arg1 endAlpha:(double)arg2 beginTime:(double)arg3 duration:(double)arg4;
- (id)lockAnimationWithBeginTime:(double)arg1;
- (id)unLockAnimationWithBeginTime:(double)arg1;
- (void)showFadeInAnimationForActivityType:(unsigned long long)arg1 afterDelay:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showFadeOutAnimationForActivityType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
