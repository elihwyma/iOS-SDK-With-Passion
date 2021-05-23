/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoUtil : NSObject

+ (unsigned int)videoCodecForPayload:(int)arg1;
+ (id)convertPixelBuffer:(struct __CVBuffer *)arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)arg1 width:(double)arg2 height:(double)arg3;
+ (struct CGSize)sizeForVideoResolution:(long long)arg1;
+ (struct __CFString *)typeIdentifierForImageType:(int)arg1;
+ (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;
+ (struct CGRect)adjustFaceBounds:(struct CGRect)arg1 fromOriginalBufferSize:(struct CGSize)arg2 toCroppedBufferSize:(struct CGSize)arg3;
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer *)arg1 originalWidth:(unsigned long long)arg2 originalHeight:(unsigned long long)arg3;
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize)arg1 toSizeB:(struct CGSize)arg2;

@end
