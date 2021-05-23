/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSString;

@protocol CVADisparityPostprocessingResult;

@interface CVAMattingResult_Impl : NSObject

{
    id <CVADisparityPostprocessingResult> _disparityPostprocessingResult;
    struct __CVBuffer *_alphaMattePixelBuffer;
}

@property (readonly) id <CVADisparityPostprocessingResult> disparityPostprocessingResult;
@property (readonly) struct __CVBuffer *alphaMattePixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDisparityPostprocessingResult:(id)arg1 alphaMattePixelBuffer:(struct __CVBuffer *)arg2;

@end
