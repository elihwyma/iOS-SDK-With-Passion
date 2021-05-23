/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@interface PixelBufferUtility : NSObject

+ (_Bool)isPixelBufferRawBayer:(struct __CVBuffer *)arg1;
+ (_Bool)isPixelBufferCompandedRawBayer:(struct __CVBuffer *)arg1;
+ (struct __CFDictionary *)createPixelBufferAttributesWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 extendedPixelsPerRow:(unsigned int)arg3 pixelFormat:(int)arg4 bytesPerRowAlignment:(unsigned int)arg5 planeAlignment:(unsigned int)arg6;
+ (_Bool)splitBayerBuffer:(struct __CVBuffer *)arg1 intoWarholPixelBuffer:(struct __CVBuffer *)arg2 shiftBitsLeftBy:(int)arg3;
+ (_Bool)splitCompandedBayerBuffer:(struct __CVBuffer *)arg1 intoCompandedWarholPixelBuffer:(struct __CVBuffer *)arg2;
+ (struct __CVBuffer *)createRawPixelBufferWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 extendedRows:(unsigned int)arg3 extendedPixelsPerRow:(unsigned int)arg4 pixelFormat:(int)arg5 bytesPerRowAlignment:(unsigned int)arg6 planeAlignment:(unsigned int)arg7 bufferCacheMode:(unsigned int)arg8;
+ (_Bool)isPixelFormatRawBayer:(unsigned int)arg1;
+ (_Bool)isPixelFormatCompandedRawBayer:(unsigned int)arg1;
+ (struct __CVBuffer *)newPixelBufferRefCopy:(struct __CVBuffer *)arg1;
+ (_Bool)copyFromPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 andShiftBits:(int)arg3;
+ (struct __CVPixelBufferPool *)createNewL010PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer *)arg1 minimumBufferCount:(unsigned long long)arg2;
+ (struct __CVPixelBufferPool *)createNewL008PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer *)arg1 minimumBufferCount:(unsigned long long)arg2;
+ (struct __CVBuffer *)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer *)arg1 withPixelBufferPool:(struct __CVPixelBufferPool *)arg2;
+ (struct __CVBuffer *)newWarholBufferFromCompandedRawBayerPixelBuffer:(struct __CVBuffer *)arg1 withPixelBufferPool:(struct __CVPixelBufferPool *)arg2;
+ (struct __CVBuffer *)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer *)arg1;
+ (_Bool)fillPlaneOfPixelBuffer:(struct __CVBuffer *)arg1 planeIndex:(int)arg2 withValue:(unsigned short)arg3;
+ (void)writeBuffer:(const char *)arg1 ofSize:(unsigned long long)arg2 toFile:(id)arg3;
+ (_Bool)joinWarholBuffer:(struct __CVBuffer *)arg1 intoBayerBuffer:(struct __CVBuffer *)arg2 shiftBitsRightBy:(int)arg3 msbReplication:(_Bool)arg4;
+ (_Bool)joinCompandedWarholBuffer:(struct __CVBuffer *)arg1 intoCompandedBayerBuffer:(struct __CVBuffer *)arg2;
+ (_Bool)verticallySplitPixelBuffer:(struct __CVBuffer *)arg1 intoTopPixelBuffer:(struct __CVBuffer *)arg2 bottomPixelBuffer:(struct __CVBuffer *)arg3;
+ (_Bool)concatPixelBuffer:(struct __CVBuffer *)arg1 withPixelBuffer:(struct __CVBuffer *)arg2 targetPixelBuffer:(struct __CVBuffer *)arg3;
+ (unsigned long long)extendedPixelsPerRowOfPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVPixelBufferPool *)createPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 extendedPixelsPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (struct __CVBuffer *)pixelBufferFromPool:(struct __CVPixelBufferPool *)arg1;

@end
