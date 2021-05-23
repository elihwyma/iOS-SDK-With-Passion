/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class ICQBannerView;

@interface PXCloudQuotaControllerWrapperView : UIView

{
    ICQBannerView *_bannerView;
    double _currentHeight;
    _Bool _highlighted;
}

@property (nonatomic) _Bool highlighted;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithBannerView:(id)arg1;
- (void)_configureBannerView;
- (void)_updateViewConfiguration;

@end
