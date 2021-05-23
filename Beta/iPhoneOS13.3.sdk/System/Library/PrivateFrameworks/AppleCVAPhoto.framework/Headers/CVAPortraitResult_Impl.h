/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSString;

@protocol CVAMattingResult;

@interface CVAPortraitResult_Impl : NSObject

{
    float _portraitStability;
    float _relightingStability;
    id <CVAMattingResult> _mattingResult;
    struct __CVBuffer *_portraitPixelBuffer;
}

@property (readonly) id <CVAMattingResult> mattingResult;
@property (readonly) struct __CVBuffer *portraitPixelBuffer;
@property (readonly) float portraitStability;
@property (readonly) float relightingStability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(struct __CVBuffer *)arg2 portraitStability:(float)arg3;
- (id)initWithMattingResult:(id)arg1 portraitPixelBuffer:(struct __CVBuffer *)arg2 portraitStability:(float)arg3 relightingStability:(float)arg4;

@end
