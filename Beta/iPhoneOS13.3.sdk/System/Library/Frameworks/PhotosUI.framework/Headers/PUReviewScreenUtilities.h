/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUReviewScreenUtilities : NSObject

+ (struct UIEdgeInsets)_layoutMarginInsetsForSizeSpec:(CDStruct_5706cf93)arg1;
+ (unsigned long long)doneButtonStyleForReferenceBounds:(struct CGRect)arg1;
+ (_Bool)useCompactControlBarButtonsForReferenceBounds:(struct CGRect)arg1;
+ (double)_cameraTopBarHeightForSizeSpec:(CDStruct_5706cf93)arg1;
+ (struct CGRect)cameraTopBarFrameForReferenceBounds:(struct CGRect)arg1;
+ (double)_cameraBottomBarHeightForSizeSpec:(CDStruct_5706cf93)arg1;
+ (double)_cameraBottomBarWidthForSizeSpec:(CDStruct_5706cf93)arg1;
+ (struct CGRect)cameraBottomBarFrameForReferenceBounds:(struct CGRect)arg1;
+ (struct CGRect)cameraContentFrameForContentAspectRatio:(double)arg1 referenceBounds:(struct CGRect)arg2;
+ (struct CGRect)cameraContentFrameForContentAspectRatio:(double)arg1 referenceBounds:(struct CGRect)arg2 shouldShiftPreviewForUtilityBar:(_Bool)arg3;
+ (CDStruct_d54ccef3)cameraTopBarGeometryForReferenceBounds:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2 withOrientation:(long long)arg3;
+ (CDStruct_d54ccef3)cameraBottomBarGeometryForReferenceBounds:(struct CGRect)arg1 withOrientation:(long long)arg2;
+ (CDStruct_d54ccef3)cameraContentGeometryForReferenceBounds:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2 withOrientation:(long long)arg3;
+ (CDStruct_d54ccef3)cameraContentGeometryForReferenceBounds:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2 withOrientation:(long long)arg3 shouldShiftPreviewForUtilityBar:(_Bool)arg4;
+ (CDStruct_d54ccef3)orientedGeometryForFrame:(struct CGRect)arg1 inBounds:(struct CGRect)arg2 orientation:(long long)arg3;
+ (double)_reviewScreenTopBarHeightForSizeSpec:(CDStruct_5706cf93)arg1;
+ (struct CGRect)reviewScreenTopBarFrameForReferenceBounds:(struct CGRect)arg1;
+ (double)_reviewScreenControlBarHeightForSizeSpec:(CDStruct_5706cf93)arg1;
+ (double)_reviewScreenControlBarWidthForSizeSpec:(CDStruct_5706cf93)arg1;
+ (struct CGRect)reviewScreenControlBarFrameForReferenceBounds:(struct CGRect)arg1;
+ (double)_reviewScreenScrubberBarHeightForSizeClass:(unsigned long long)arg1;
+ (struct CGRect)reviewScreenScrubberBarFrameForReferenceBounds:(struct CGRect)arg1;
+ (struct CGRect)reviewScreenScrubberBarFrameForReferenceBounds:(struct CGRect)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
+ (CDStruct_d54ccef3)reviewScreenContentGeometryForReferenceBounds:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2 withOrientation:(long long)arg3;
+ (CDStruct_d54ccef3)reviewScreenTopBarGeometryForReferenceBounds:(struct CGRect)arg1 withOrientation:(long long)arg2;
+ (CDStruct_d54ccef3)reviewScreenControlBarGeometryForReferenceBounds:(struct CGRect)arg1 withOrientation:(long long)arg2;
+ (CDStruct_d54ccef3)reviewScreenScrubberBarGeometryForReferenceBounds:(struct CGRect)arg1 withOrientation:(long long)arg2;
+ (CDStruct_d54ccef3)reviewScreenScrubberBarGeometryForReferenceBounds:(struct CGRect)arg1 withOrientation:(long long)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
+ (CDStruct_d54ccef3)_geometryForBarFrame:(struct CGRect)arg1 inReferenceBounds:(struct CGRect)arg2 orientation:(long long)arg3;
+ (CDStruct_d54ccef3)_geometryForCameraTopBarFrame:(struct CGRect)arg1 inReferenceBounds:(struct CGRect)arg2 forContentSize:(struct CGSize)arg3 orientation:(long long)arg4;
+ (struct CGRect)_portraitBoundsForReferenceBounds:(struct CGRect)arg1;
+ (struct CGAffineTransform)_transformForRotationAboutCenterOfReferenceBounds:(struct CGRect)arg1 withOrientationTransform:(struct CGAffineTransform)arg2;
+ (struct CGRect)_orientedBoundsForReferenceBounds:(struct CGRect)arg1 sizeClass:(unsigned long long)arg2;

@end
