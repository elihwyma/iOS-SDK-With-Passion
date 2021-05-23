/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class CVADisparityPostprocessingRequest;

@interface CVAMattingRequest : NSObject

{
    CVADisparityPostprocessingRequest *_disparityPostprocessingRequest;
    struct __CVBuffer *_segmentationPixelBuffer;
    struct __CVBuffer *_skinSegmentationPixelBuffer;
    struct __CVBuffer *_destinationAlphaMattePixelBuffer;
}

@property (readonly) CVADisparityPostprocessingRequest *disparityPostprocessingRequest;
@property (readonly) struct __CVBuffer *segmentationPixelBuffer;
@property (readonly) struct __CVBuffer *skinSegmentationPixelBuffer;
@property (readonly) struct __CVBuffer *destinationAlphaMattePixelBuffer;

- (void)dealloc;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(struct __CVBuffer *)arg2 skinSegmentationPixelBuffer:(struct __CVBuffer *)arg3 destinationAlphaMattePixelBuffer:(struct __CVBuffer *)arg4 error:(id *)arg5;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 destinationAlphaMattePixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(struct __CVBuffer *)arg2 destinationAlphaMattePixelBuffer:(struct __CVBuffer *)arg3 error:(id *)arg4;

@end
