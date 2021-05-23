/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@interface VideoFrameWriterElement : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    long long _frameNumber;
    CDStruct_1b6d18a9 _frameTime;
}

@property (nonatomic) struct __CVBuffer *pixelBuffer;
@property (nonatomic) CDStruct_1b6d18a9 frameTime;
@property (nonatomic) long long frameNumber;

- (void)dealloc;
- (void)DeallocPixBuffer;

@end
