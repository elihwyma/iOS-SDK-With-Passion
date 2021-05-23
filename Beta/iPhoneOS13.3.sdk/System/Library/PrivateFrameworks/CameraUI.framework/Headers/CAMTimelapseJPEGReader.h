/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMTimelapseJPEGReader : NSObject

+ (id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(_Bool)arg2 useBGRA:(_Bool)arg3;
+ (_Bool)_hasExifRotation:(id)arg1;
+ (struct __CVBuffer *)createPixelBufferFromData:(id)arg1 applyTransform:(_Bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(_Bool)arg4 cleanApertureSize:(struct CGSize)arg5;
+ (id)newDataFromFilePath:(id)arg1;
+ (struct __CVBuffer *)createPixelBufferFromData:(id)arg1 applyTransform:(_Bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(_Bool)arg4;
+ (struct CGImage *)createCGImageFromData:(id)arg1 applyTransform:(_Bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(_Bool)arg4;

@end
