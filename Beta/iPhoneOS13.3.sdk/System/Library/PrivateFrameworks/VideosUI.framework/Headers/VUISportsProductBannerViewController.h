/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSString, UIView, VUIProductUberBackgroundView, VUISportsProductBannerView;

__attribute__((visibility("hidden")))
@interface VUISportsProductBannerViewController : UIViewController

{
    VUIProductUberBackgroundView *_uberBackgroundView;
    IKViewElement *_viewElement;
    VUISportsProductBannerView *_bannerView;
    UIView *_whiteBackgroundView;
}

@property (retain, nonatomic) VUIProductUberBackgroundView *uberBackgroundView;
@property (retain, nonatomic) UIView *whiteBackgroundView;
@property (retain, nonatomic) VUISportsProductBannerView *bannerView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isUberLayoutActive;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double topThreshold;

- (id)preferredFocusEnvironments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setUberImageOffset:(double)arg1;
- (void)setBannerOpacity:(double)arg1;
- (void)_configureViewSubviews;
- (void)setWhiteBannerOpacity:(double)arg1;

@end
