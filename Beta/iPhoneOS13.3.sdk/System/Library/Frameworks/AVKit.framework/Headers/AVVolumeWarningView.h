/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface AVVolumeWarningView : UIView

{
    _Bool _stopping;
    UIViewPropertyAnimator *_animator;
}

@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (nonatomic, getter=isStopping) _Bool stopping;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)startAnimating;
- (void)stopAnimatingAndRemoveFromSuperview;
- (void)continueAnimating;

@end
