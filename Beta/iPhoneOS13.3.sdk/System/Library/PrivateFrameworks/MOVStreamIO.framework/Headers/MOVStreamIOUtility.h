/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@interface MOVStreamIOUtility : NSObject

+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)audioNoneEncoderConfig;
+ (id)getJsonFriendlyCopy:(id)arg1;
+ (_Bool)isValidJSONObject:(id)arg1 path:(id)arg2;
+ (id)monochrome8bitHEVCLosslessEncoderConfig;
+ (id)monochrome8bitHEVCEncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)monochrome8bitHEVCEncoderConfig;
+ (id)slimEncoderConfig;
+ (_Bool)isEncoderAvailableForEncoderType:(int)arg1;
+ (id)colorH264EncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)colorH264EncoderConfig;
+ (id)colorHEVCLosslessEncoderConfig;
+ (id)colorHEVCEncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)colorHEVCEncoderConfig;
+ (struct opaqueCMFormatDescription *)formatForPixelBuffer:(struct __CVBuffer *)arg1;
+ (_Bool)isEncoderAvailableWithEncoderName:(id)arg1;
+ (double)transformAngleFromVideoOrientation:(int)arg1;
+ (unsigned long long)getPreferredPlaneAlignmentSize;
+ (unsigned long long)getPreferredBytesPerRowAlignmentSize;
+ (int)getDefaultBitrateForVideoDimension:(CDStruct_1ef3fb1f)arg1 atExpectedFramerate:(double)arg2 forEncoderType:(int)arg3;
+ (struct CGAffineTransform)CGAffineTransformValueFromNSValue:(id)arg1;
+ (id)addTransform:(struct CGAffineTransform)arg1 toConfiguration:(id)arg2;
+ (id)monochrome10bitHEVCLosslessEncoderConfig;
+ (id)slimXEncoderConfig;
+ (id)noneEncoderConfig;
+ (void)populateError:(id *)arg1 withLocalizedDescription:(id)arg2 andErrorCode:(long long)arg3;
+ (id)getPlistFriendlyCopyOf:(id)arg1;
+ (struct opaqueCMFormatDescription *)createL010FormatDescriptionFromL016FormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (struct opaqueCMFormatDescription *)createL010FormatDescriptionFromRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (struct opaqueCMFormatDescription *)createL008FormatDescriptionFromCompandedRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg1;

@end
