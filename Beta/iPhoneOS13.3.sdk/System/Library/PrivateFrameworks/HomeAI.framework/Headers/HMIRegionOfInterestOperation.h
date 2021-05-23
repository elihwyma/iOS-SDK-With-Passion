/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSOperation.h>

@class HMICameraVideoFrame, NSError;

__attribute__((visibility("hidden")))
@interface HMIRegionOfInterestOperation : NSOperation

{
    struct __CVBuffer *_pixelBuffer;
    HMICameraVideoFrame *_frame;
    NSError *_error;
    struct CGSize _size;
    struct CGRect _cropRect;
}

@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) struct CGRect cropRect;
@property (weak, readonly) HMICameraVideoFrame *frame;
@property (readonly) struct CGSize size;
@property (readonly) NSError *error;

- (void)dealloc;
- (void)main;
- (id)initWithFrame:(id)arg1 size:(struct CGSize)arg2;

@end
