/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHFace.h>

@interface PHFace (PhotosUICore)

+ (id)px_fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;

- (struct CGSize)px_faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1;
- (struct CGRect)px_cropRectWithCropFactor:(double)arg1 bounded:(_Bool)arg2;
- (_Bool)px_cropRectForPortraitImage:(struct CGRect *)arg1;
- (struct CGRect)px_cropRectWithCropFactor:(double)arg1;

@end
