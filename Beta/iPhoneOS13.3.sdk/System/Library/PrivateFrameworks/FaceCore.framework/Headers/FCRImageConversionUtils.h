/*
 Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

#import <Foundation/NSObject.h>

@interface FCRImageConversionUtils : NSObject

+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 dispatchQueue:(id)arg3 cacheContext:(_Bool)arg4;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(_Bool)arg2 cacheContext:(_Bool)arg3;

@end
