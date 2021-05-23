/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <webrtc/Swift-Protocol.h>

@protocol RTCYUVPlanarBuffer <Swift>

@property (nonatomic, readonly) int chromaWidth;
@property (nonatomic, readonly) int chromaHeight;
@property (nonatomic, readonly) const char *dataY;
@property (nonatomic, readonly) const char *dataU;
@property (nonatomic, readonly) const char *dataV;
@property (nonatomic, readonly) int strideY;
@property (nonatomic, readonly) int strideU;
@property (nonatomic, readonly) int strideV;

- (unsigned short)initWithWidth:height: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithWidth:height:dataY:dataU:dataV: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithWidth:height:strideY:strideU:strideV: /* Error: Ran out of types for this method. */;

@end
