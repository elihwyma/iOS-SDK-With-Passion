/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NSObject, NUAnimationQueue, NUCrossFadeTitleView, NUFadeViewAnimator, NUSlideViewAnimator;

@protocol NUTitleViewDelegate, NUTitleViewStyler, OS_dispatch_semaphore;

@interface NUTitleView : UIView

{
    id <NUTitleViewStyler> _styler;
    id <NUTitleViewDelegate> _delegate;
    NUCrossFadeTitleView *_titleView;
    NUCrossFadeTitleView *_incomingTitleView;
    NUSlideViewAnimator *_slideAnimator;
    NUFadeViewAnimator *_fadeAnimator;
    NUAnimationQueue *_animationQueue;
    NSObject<OS_dispatch_semaphore> *_lingerSemaphore;
}

@property (retain, nonatomic) NUCrossFadeTitleView *titleView;
@property (retain, nonatomic) NUCrossFadeTitleView *incomingTitleView;
@property (nonatomic, readonly) NUSlideViewAnimator *slideAnimator;
@property (nonatomic, readonly) NUFadeViewAnimator *fadeAnimator;
@property (nonatomic, readonly) NUAnimationQueue *animationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lingerSemaphore;
@property (retain, nonatomic) id <NUTitleViewStyler> styler;
@property (weak, nonatomic) id <NUTitleViewDelegate> delegate;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyler:(id)arg1;
- (void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (void)relayoutWithAnimation:(_Bool)arg1;
- (void)titleViewHandleTapGuesture;
- (void)finishDisplayingTitleViewUpdate:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)createMaskingLayerForTranslation;

@end
