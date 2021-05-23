/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIViewController.h>

@class UIView, _ADUIViewControllerAdController;

@interface UIViewController (iAdAdditions_Private)

@property (nonatomic, readonly) _ADUIViewControllerAdController *_iAd_advertisingController;
@property (nonatomic) long long interstitialPresentationPolicy;
@property (nonatomic) _Bool canDisplayBannerAds;
@property (nonatomic, readonly) UIView *originalContentView;
@property (nonatomic, readonly, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd;
@property (nonatomic, readonly, getter=isDisplayingBannerAd) _Bool displayingBannerAd;
@property (nonatomic, readonly) _Bool shouldPresentInterstitialAd;

+ (void)prepareInterstitialAds;

- (void)_iAd_requestForInterstitialAdDidSucceed:(_Bool)arg1 resultMessage:(id)arg2;
- (_Bool)requestInterstitialAdPresentation;

@end
