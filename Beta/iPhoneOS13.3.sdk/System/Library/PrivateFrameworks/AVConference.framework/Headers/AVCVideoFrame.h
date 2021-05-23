/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface AVCVideoFrame : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_depthPixelBuffer;
    CDStruct_1b6d18a9 _time;
    NSData *_imageData;
    NSData *_effectsMetadata;
    float _renderProcessTime;
    id _delegate;
}

@property (nonatomic) struct __CVBuffer *pixelBuffer;
@property (nonatomic) struct __CVBuffer *depthPixelBuffer;
@property (retain) NSData *imageData;
@property CDStruct_1b6d18a9 time;
@property (retain) NSData *effectsMetadata;
@property float renderProcessTime;

- (void)dealloc;
- (id)delegate;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 imageData:(id)arg4 delegate:(id)arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 imageData:(id)arg3;

@end
