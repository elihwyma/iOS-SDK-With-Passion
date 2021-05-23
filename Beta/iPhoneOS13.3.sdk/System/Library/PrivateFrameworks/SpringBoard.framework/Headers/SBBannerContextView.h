/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBBannerViewCallbackManager, SBUIBannerContext;

@protocol SBUIBannerView;

@interface SBBannerContextView : UIView

{
    SBBannerViewCallbackManager *_callbacks;
    SBBannerViewCallbackManager *_wrapperCallbacks;
    SBUIBannerContext *_bannerContext;
    UIView<SBUIBannerView> *_bannerView;
}

@property (nonatomic, readonly) SBUIBannerContext *bannerContext;
@property (retain, nonatomic, readonly) UIView<SBUIBannerView> *bannerView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteWillAppear;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2;

@end
