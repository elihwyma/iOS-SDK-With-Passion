/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <webrtc/WK_RTCI420Buffer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCMutableI420Buffer : WK_RTCI420Buffer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int chromaWidth;
@property (nonatomic, readonly) int chromaHeight;
@property (nonatomic, readonly) const char *dataY;
@property (nonatomic, readonly) const char *dataU;
@property (nonatomic, readonly) const char *dataV;
@property (nonatomic, readonly) int strideY;
@property (nonatomic, readonly) int strideU;
@property (nonatomic, readonly) int strideV;
@property (nonatomic, readonly) char *mutableDataY;
@property (nonatomic, readonly) char *mutableDataU;
@property (nonatomic, readonly) char *mutableDataV;

@end
