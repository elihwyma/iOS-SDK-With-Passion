/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

@class ADInterstitialAd, NSString, UIView;

@protocol NULoadingDelegate;

@interface NUInterstitialViewController : UIViewController

{
    _Bool _hasPresentedInterstitial;
    NSString *_pageIdentifier;
    id <NULoadingDelegate> _loadingDelegate;
    ADInterstitialAd *_interstitial;
    UIView *_interstitialView;
}

@property (nonatomic, readonly) ADInterstitialAd *interstitial;
@property (retain, nonatomic) UIView *interstitialView;
@property (nonatomic) _Bool hasPresentedInterstitial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;
@property (copy, nonatomic, readonly) NSString *pageIdentifier;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2;

@end
