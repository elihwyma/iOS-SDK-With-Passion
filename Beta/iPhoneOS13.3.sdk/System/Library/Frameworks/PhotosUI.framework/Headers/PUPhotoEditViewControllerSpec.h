/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUPhotoEditViewControllerSpec : PUViewControllerSpec

@property (nonatomic, readonly) struct UIEdgeInsets previewViewInsetsPortrait;
@property (nonatomic, readonly) struct UIEdgeInsets previewViewInsetsLandscape;
@property (nonatomic, readonly) double toolbarLongSideMargin;
@property (nonatomic, readonly) double toolbarLongSideWideMargin;
@property (nonatomic, readonly) _Bool shouldDisplaySecondaryToolButtonsInMainToolbar;
@property (nonatomic, readonly) _Bool shouldDisplayExtensionButtonInMainToolbar;
@property (nonatomic, readonly) _Bool shouldDisplayCompactToolbar;
@property (nonatomic, readonly) _Bool shouldAnchorLightingAgainstToolbar;

@end
