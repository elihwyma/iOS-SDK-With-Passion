/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSString, VUIProductBannerView, VUIProductUberBackgroundView;

__attribute__((visibility("hidden")))
@interface VUIProductBannerViewController : UIViewController

{
    VUIProductUberBackgroundView *_uberBackgroundView;
    IKViewElement *_viewElement;
    VUIProductBannerView *_bannerView;
}

@property (retain, nonatomic) VUIProductUberBackgroundView *uberBackgroundView;
@property (retain, nonatomic) VUIProductBannerView *bannerView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isUberLayoutActive;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double topThreshold;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)setUberImageOffset:(double)arg1;
- (void)setBannerOpacity:(double)arg1;
- (void)_configureViewSubviews;

@end
