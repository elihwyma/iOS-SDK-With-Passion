/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <webrtc/Swift-Protocol.h>

@protocol WK_RTCVideoFrameBuffer <Swift>

@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;

- (unsigned short)toI420;

@end
