/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UINavigationItem.h>

@class UIView;

@interface UINavigationItem (PXNavigationBanner)

@property (retain, nonatomic, setter=px_setBannerView:) UIView *px_bannerView;
@property (nonatomic, setter=px_setPreferredLargeTitleDisplayMode:) long long px_preferredLargeTitleDisplayMode;
@property (nonatomic, setter=px_setDisableLargeTitle:) _Bool px_disableLargeTitle;

- (void)_updateFinalLargeTitleDisplayMode;

@end
