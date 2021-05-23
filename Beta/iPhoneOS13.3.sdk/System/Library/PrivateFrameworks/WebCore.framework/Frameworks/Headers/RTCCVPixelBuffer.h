/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

#import <webrtc/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTCCVPixelBuffer : NSObject <Swift>

{
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
    int _cropWidth;
    int _cropHeight;
    int _cropX;
    int _cropY;
    struct __CVBuffer *_pixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) int cropX;
@property (nonatomic, readonly) int cropY;
@property (nonatomic, readonly) int cropWidth;
@property (nonatomic, readonly) int cropHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;

+ (id)supportedPixelFormats;

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)toI420;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 adaptedWidth:(int)arg2 adaptedHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7;
- (_Bool)requiresScalingToWidth:(int)arg1 height:(int)arg2;
- (void)cropAndScaleNV12To:(struct __CVBuffer *)arg1 withTempBuffer:(char *)arg2;
- (void)cropAndScaleARGBTo:(struct __CVBuffer *)arg1;
- (_Bool)requiresCropping;
- (_Bool)cropAndScaleTo:(struct __CVBuffer *)arg1 withTempBuffer:(char *)arg2;
- (int)bufferSizeForCroppingAndScalingToWidth:(int)arg1 height:(int)arg2;

@end
