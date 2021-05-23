/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKDocumentBannerElement, NSArray, NSLayoutConstraint, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasBannerController : NSObject

{
    IKDocumentBannerElement *_bannerElement;
    unsigned long long _vignetteType;
    UIView *_installedView;
    UIScrollView *_trackingScrollView;
    NSArray *_installedConstraints;
    UIImageView *_bannerImageView;
    UIImageView *_vignetteImageView;
    NSLayoutConstraint *_bannerImageViewHeightConstraint;
    UIView *_maskView;
}

@property (weak, nonatomic) UIView *installedView;
@property (weak, nonatomic) UIScrollView *trackingScrollView;
@property (retain, nonatomic) NSArray *installedConstraints;
@property (retain, nonatomic) UIImageView *bannerImageView;
@property (retain, nonatomic) UIImageView *vignetteImageView;
@property (retain, nonatomic) NSLayoutConstraint *bannerImageViewHeightConstraint;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic, readonly) IKDocumentBannerElement *bannerElement;
@property (nonatomic) unsigned long long vignetteType;

- (id)initWithBannerElement:(id)arg1;
- (void)installBannerOnView:(id)arg1 anchoredToScrollView:(id)arg2;
- (void)_updateVignetteImage;
- (void)_configureBanner;
- (void)_doAllSetup;

@end
