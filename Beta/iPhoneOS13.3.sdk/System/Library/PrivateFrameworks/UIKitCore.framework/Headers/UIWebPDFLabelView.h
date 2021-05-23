/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSTimer, UILabel, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView

{
    UILabel *_label;
    _UIBackdropView *_backdropView;
    NSTimer *_timer;
    unsigned long long currentPageIndex;
}

@property (nonatomic, readonly, getter=isTimerInstalled) _Bool timerInstalled;
@property (nonatomic) unsigned long long currentPageIndex;

- (void)dealloc;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)clearTimer;
- (double)_fadeOutDuration;
- (void)fadeOut;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint)arg2 withText:(id)arg3 animated:(_Bool)arg4;
- (void)_makeRoundedCorners;
- (double)_fadeOutDelay;
- (void)_fadeOutAnimationDidStop;

@end
