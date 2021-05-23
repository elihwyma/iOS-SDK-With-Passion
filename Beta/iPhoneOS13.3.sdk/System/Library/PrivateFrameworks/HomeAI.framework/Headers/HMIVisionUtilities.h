/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMIVisionUtilities : HMFObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg1 pixelFormat:(unsigned int)arg2 options:(long long)arg3 error:(id *)arg4;
+ (struct __CVBuffer *)createPixelBufferWithSize:(struct CGSize)arg1 pixelFormat:(unsigned int)arg2 useIOSurface:(_Bool)arg3;
+ (struct __CVBuffer *)transferPixelBuffer:(struct __CVBuffer *)arg1 crop:(struct CGRect)arg2 size:(struct CGSize)arg3 pixelFormat:(unsigned int)arg4 options:(long long)arg5 error:(id *)arg6;
+ (struct CGRect)applyPadding:(struct CGRect)arg1 withOriginalSize:(struct CGSize)arg2 padding:(struct CGSize)arg3;
+ (struct __CVBuffer *)cropPixelBuffer:(struct __CVBuffer *)arg1 crop:(struct CGRect)arg2 error:(id *)arg3;
+ (struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg1 size:(struct CGSize)arg2 error:(id *)arg3;
+ (struct __CVBuffer *)resizePixelBuffer:(struct __CVBuffer *)arg1 size:(struct CGSize)arg2 pixelFormat:(unsigned int)arg3 options:(long long)arg4 error:(id *)arg5;
+ (struct __CVBuffer *)dewarpPixelBuffer:(struct __CVBuffer *)arg1 crop:(struct CGRect)arg2 size:(struct CGSize)arg3 pixelFormat:(unsigned int)arg4 options:(long long)arg5 cameraModel:(id)arg6 error:(id *)arg7;
+ (struct CGRect)imposeMinSizeFor:(struct CGRect)arg1 withOriginalSize:(struct CGSize)arg2 minCrop:(int)arg3;
+ (struct CGRect)maintainAspectRatio:(struct CGRect)arg1 originalSize:(struct CGSize)arg2 ratioThreshold:(float)arg3;

@end
