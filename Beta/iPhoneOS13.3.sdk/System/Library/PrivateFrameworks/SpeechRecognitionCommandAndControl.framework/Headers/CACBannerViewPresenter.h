/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACBannerView, UIView;

@interface CACBannerViewPresenter : NSObject

{
    UIView *_containingView;
    CACBannerView *_bannerView;
}

@property (retain, nonatomic) CACBannerView *bannerView;
@property (nonatomic, readonly) UIView *containingView;

+ (double)durationToDisplayMessageString:(id)arg1;

- (void)_hideBannerView;
- (void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 duration:(double)arg3;
- (id)initWithContainingView:(id)arg1;
- (void)presentBannerViewWithText:(id)arg1 type:(long long)arg2;
- (void)dismissBannerView;

@end
