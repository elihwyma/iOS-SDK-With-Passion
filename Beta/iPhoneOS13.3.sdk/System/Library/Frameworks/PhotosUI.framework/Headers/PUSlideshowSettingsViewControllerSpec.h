/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpec.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewControllerSpec : PUViewControllerSpec

@property (nonatomic, readonly) _Bool shouldShowNavigationBar;
@property (nonatomic, readonly) _Bool shouldUseBlurredBackground;
@property (nonatomic, readonly) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) UIColor *tableViewBackgroundColor;
@property (nonatomic, readonly) UIView *tableViewHeaderView;
@property (nonatomic, readonly) unsigned long long rectEdgeForExtendedLayout;

- (id)currentChange;
- (id)newSpecChange;

@end
