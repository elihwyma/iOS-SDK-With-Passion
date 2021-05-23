/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/Swift-Protocol.h>

@protocol CVAMattingResult;

@protocol CVAPortraitResult <Swift>

@property (readonly) id <CVAMattingResult> mattingResult;
@property (readonly) struct __CVBuffer *portraitPixelBuffer;
@property (readonly) float portraitStability;
@property (readonly) float relightingStability;

@end
