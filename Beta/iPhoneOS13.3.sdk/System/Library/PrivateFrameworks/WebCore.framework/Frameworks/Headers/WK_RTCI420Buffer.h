/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

#import <webrtc/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCI420Buffer : NSObject <Swift>

{
    scoped_refptr_b674d2a6 _i420Buffer;
}

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

- (id).cxx_construct;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)toI420;
- (id)initWithFrameBuffer:(scoped_refptr_b674d2a6)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2 dataY:(const char *)arg3 dataU:(const char *)arg4 dataV:(const char *)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (scoped_refptr_b674d2a6)nativeI420Buffer;

@end
