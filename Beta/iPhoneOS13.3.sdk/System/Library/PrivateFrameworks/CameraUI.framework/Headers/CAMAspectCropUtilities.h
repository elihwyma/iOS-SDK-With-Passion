/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMAspectCropUtilities : NSObject

+ (struct CGSize)finalExpectedSizeWithPhotoMetadata:(id)arg1 aspectRatio:(long long)arg2;
+ (struct CGRect)cropRectForAspectRatio:(long long)arg1 inImageBounds:(struct CGRect)arg2;
+ (struct CGSize)finalExpectedSizeWithCaptureDimensions:(CDStruct_79c71658)arg1 orientation:(int)arg2 aspectRatio:(long long)arg3;
+ (id)cropFilterForAspectRatio:(long long)arg1 imageSize:(struct CGSize)arg2;

@end
