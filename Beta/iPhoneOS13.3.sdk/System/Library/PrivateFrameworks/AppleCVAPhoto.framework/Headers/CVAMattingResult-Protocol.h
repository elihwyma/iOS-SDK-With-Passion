/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/Swift-Protocol.h>

@protocol CVADisparityPostprocessingResult;

@protocol CVAMattingResult <Swift>

@property (readonly) id <CVADisparityPostprocessingResult> disparityPostprocessingResult;
@property (readonly) struct __CVBuffer *alphaMattePixelBuffer;

@end
