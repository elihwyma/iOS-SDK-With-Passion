/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

#import <iAd/Swift-Protocol.h>

@class ADBannerView, ADInterstitialAd, NSString, NSURL, UIViewController;

@interface _ADUIViewControllerAdController : NSObject <Swift>

{
    _Bool _canDisplayBannerAds;
    _Bool _canOwnSharedBanner;
    _Bool _presentingFullScreenAd;
    NSURL *_bannerServerURL;
    NSString *_bannerAdSection;
    NSString *_bannerAuthUserName;
    NSURL *_interstitialServerURL;
    NSString *_interstitialAdSection;
    NSString *_interstitialAuthUserName;
    UIViewController *_contentViewController;
    long long _interstitialPresentationPolicy;
    ADBannerView *_bannerView;
    ADInterstitialAd *_interstitialAd;
}

@property (weak, nonatomic) UIViewController *contentViewController;
@property (nonatomic) long long interstitialPresentationPolicy;
@property (nonatomic) _Bool canDisplayBannerAds;
@property (nonatomic) _Bool canOwnSharedBanner;
@property (nonatomic, getter=isPresentingFullScreenAd) _Bool presentingFullScreenAd;
@property (nonatomic, readonly, getter=isDisplayingBannerAd) _Bool displayingBannerAd;
@property (retain, nonatomic) ADBannerView *bannerView;
@property (retain, nonatomic) ADInterstitialAd *interstitialAd;
@property (copy, nonatomic) NSURL *bannerServerURL;
@property (copy, nonatomic) NSString *bannerAdSection;
@property (copy, nonatomic) NSString *bannerAuthUserName;
@property (copy, nonatomic) NSURL *interstitialServerURL;
@property (copy, nonatomic) NSString *interstitialAdSection;
@property (copy, nonatomic) NSString *interstitialAuthUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)prepareInterstitialAds;
+ (id)_sharedBannerView;

- (id)initWithContentViewController:(id)arg1;
- (void)viewController:(id)arg1 viewWillAppear:(_Bool)arg2;
- (void)viewController:(id)arg1 viewDidAppear:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappear:(_Bool)arg2;
- (void)viewController:(id)arg1 viewDidDisappear:(_Bool)arg2;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)bannerViewActionDidFinish:(id)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdActionDidFinish:(id)arg1;
- (_Bool)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (_Bool)requestInterstitialAdPresentation;
- (void)_layoutContentAndBannerViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_considerTakingBannerViewAnimated:(_Bool)arg1;
- (_Bool)_presentInterstitialIfReady;
- (void)_hideBannerView;
- (void)_setEmbeddedFrame:(struct CGRect)arg1;

@end
