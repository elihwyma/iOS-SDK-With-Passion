/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAbstractNavigationBanner.h>

@class PUPickerBannerView, UIView;

__attribute__((visibility("hidden")))
@interface PUPickerBanner : PUAbstractNavigationBanner

{
    UIView *_view;
}

@property (nonatomic, readonly) PUPickerBannerView *bannerView;

- (double)height;
- (id)view;

@end
