/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UINavigationItem.h>

@class PUAbstractNavigationBanner;

@interface UINavigationItem (PUAbstractNavigationBanner)

@property (retain, nonatomic, setter=pu_setBanner:) PUAbstractNavigationBanner *pu_banner;

- (_Bool)_pu_shouldUpdateBarButtonItems:(id)arg1 withNewBarButtonItems:(id)arg2;
- (_Bool)pu_shouldUpdateLeftBarButtonItems:(id)arg1;
- (_Bool)pu_shouldUpdateRightBarButtonItems:(id)arg1;
- (void)pu_setDefaultBackBarButtonItemWithTitle:(id)arg1;

@end
