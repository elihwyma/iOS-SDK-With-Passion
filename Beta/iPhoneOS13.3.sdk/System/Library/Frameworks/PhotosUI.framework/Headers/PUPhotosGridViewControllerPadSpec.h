/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewControllerSpec.h>

@interface PUPhotosGridViewControllerPadSpec : PUPhotosGridViewControllerSpec

- (unsigned long long)supportedInterfaceOrientations;
- (unsigned short)thumbnailImageFormat;
- (id)photosPickerViewControllerSpec;
- (long long)cellFillMode;
- (long long)cellBannerTextAlignment;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (_Bool)shouldPlaceSelectAllButtonInRightNavigationBar;
- (_Bool)shouldPlaceDeleteInCenterToolbarPosition;
- (_Bool)wantsBackButtonTitleForPhotoBrowser;
- (_Bool)wantsCustomNavigationTransition;
- (long long)sectionHeaderStyle;
- (struct CGSize)baseInterItemSpacing;
- (_Bool)canDisplayOptionsInPopover;
- (_Bool)canDisplaySlideshowButton;
- (_Bool)canDisplayEditActionsInNavigationBar;
- (_Bool)usesStackPopTransition;
- (id)albumPickerViewControllerSpec;

@end
