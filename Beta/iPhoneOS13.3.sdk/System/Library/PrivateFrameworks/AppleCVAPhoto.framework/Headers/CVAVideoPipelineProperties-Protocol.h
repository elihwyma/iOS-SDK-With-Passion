/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/Swift-Protocol.h>

@class NSArray;

@protocol CVAVideoPipelineProperties <Swift>

@property unsigned long long colorPixelBufferWidth;
@property unsigned long long colorPixelBufferHeight;
@property (readonly) unsigned int colorPixelBufferPixelFormat;
@property float colorPixelBufferFocalLength_mm;
@property float colorPixelBufferPixelSize_um;
@property float colorPixelBufferFocalRatio;
@property unsigned long long alphaMattePixelBufferWidth;
@property unsigned long long alphaMattePixelBufferHeight;
@property (readonly) unsigned int alphaMattePixelBufferPixelFormat;
@property unsigned long long inputDisparityPixelBufferWidth;
@property unsigned long long inputDisparityPixelBufferHeight;
@property unsigned long long outputDisparityPixelBufferWidth;
@property unsigned long long outputDisparityPixelBufferHeight;
@property unsigned long long inputToOutputDisparityPixelBufferRotation;
@property (readonly) unsigned int inputDisparityPixelBufferPixelFormat;
@property (readonly) unsigned int outputDisparityPixelBufferPixelFormat;
@property (readonly) NSArray *supportedInputSegmentationPixelBufferPixelFormats;

@end
