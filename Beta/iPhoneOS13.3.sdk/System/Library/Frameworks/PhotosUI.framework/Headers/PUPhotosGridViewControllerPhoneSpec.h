/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewControllerSpec.h>

@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec

- (unsigned long long)supportedInterfaceOrientations;
- (unsigned short)thumbnailImageFormat;
- (struct UIEdgeInsets)gridContentInsets;
- (id)photosPickerViewControllerSpec;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (_Bool)shouldPlaceSelectAllButtonInRightNavigationBar;
- (long long)forceLoadInitialSectionCount;
- (struct CGSize)baseInterItemSpacing;
- (_Bool)canDisplayOptionsInPopover;
- (_Bool)canDisplaySlideshowButton;
- (id)albumPickerViewControllerSpec;

@end
