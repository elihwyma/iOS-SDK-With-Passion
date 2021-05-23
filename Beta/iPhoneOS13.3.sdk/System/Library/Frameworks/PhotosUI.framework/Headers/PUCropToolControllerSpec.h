/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolControllerSpec.h>

@class PXLabelSpec, UIColor;

__attribute__((visibility("hidden")))
@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic, readonly) double cropRectMargin;
@property (nonatomic, readonly) double minimumCropInset;
@property (nonatomic, readonly) struct CGSize minimumCropSize;
@property (nonatomic, readonly) struct CGSize minimumCropHandleViewSize;
@property (nonatomic, readonly) struct CGSize cropActionButtonSize;
@property (nonatomic, readonly) double cropHandleViewLineThickness;
@property (nonatomic, readonly) double cropHandleViewLineMargin;
@property (nonatomic, readonly) double standardBottomBarWidth;
@property (nonatomic, readonly) double standardSideBarHeight;
@property (nonatomic, readonly) double leftInsetForiPad;
@property (nonatomic, readonly) double cropTopBarHeight;
@property (nonatomic, readonly) double cropAspectRatioScrollHeight;
@property (nonatomic, readonly) double cropAspectFlipperWidth;
@property (nonatomic, readonly) struct UIEdgeInsets cropAspectRatioScrollContentInset;
@property (nonatomic, readonly) struct UIEdgeInsets cropAspectRatioButtonTitleInset;
@property (nonatomic, readonly) UIColor *cropAspectButtonColor;
@property (nonatomic, readonly) UIColor *cropAspectButtonSelectedColor;
@property (nonatomic, readonly) PXLabelSpec *cropHeaderLabelSpec;

- (double)standardBottomBarHeight;
- (double)standardSideBarWidth;

@end
