/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@protocol RTCVideoFrameBuffer;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoFrame : NSObject

{
    long long _rotation;
    long long _timeStampNs;
    int timeStamp;
    id <RTCVideoFrameBuffer> _buffer;
}

@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) long long rotation;
@property (nonatomic, readonly) long long timeStampNs;
@property (nonatomic) int timeStamp;
@property (nonatomic, readonly) id <RTCVideoFrameBuffer> buffer;

- (id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)newI420VideoFrame;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9;

@end
