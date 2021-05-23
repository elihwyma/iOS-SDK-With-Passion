/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIViewController.h>

@class ADCountdownButton, ADInterstitialAd;

@interface ADInterstitialAdPresentationViewController : UIViewController

{
    ADInterstitialAd *_interstitialAd;
    ADCountdownButton *_closeButton;
}

@property (weak, nonatomic) ADInterstitialAd *interstitialAd;
@property (retain, nonatomic) ADCountdownButton *closeButton;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)wantsFullScreenLayout;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (id)initForInterstitialAd:(id)arg1;

@end
