/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString, WK_RTCVideoCodecInfo;

__attribute__((visibility("hidden")))
@interface WK_RTCSingleVideoEncoderH264 : NSObject

{
    WK_RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster>> _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    unsigned long long _packetizationMode;
    struct __CFString *_profile;
    CDUnknownBlockType _callback;
    int _width;
    int _height;
    _Bool _useVCP;
    struct OpaqueVTCompressionSession *_vtCompressionSession;
    struct _VCPCompressionSession *_vcpCompressionSession;
    struct __CVPixelBufferPool *_pixelBufferPool;
    unsigned long long _mode;
    struct H264BitstreamParser _h264BitstreamParser;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _frameScaleBuffer;
    struct VideoCodec _nativeVideoCodec;
    int _simulcastIndex;
    _Bool _disableEncoding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (id)implementationName;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)releaseEncoder;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (int)setRateAllocation:(id)arg1 framerate:(unsigned int)arg2;
- (id)scalingSettings;
- (void)destroyCompressionSession;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (_Bool)hasCompressionSession;
- (_Bool)resetCompressionSessionIfNeededWithFrame:(id)arg1;
- (void)setBitrateBps:(unsigned int)arg1;
- (unsigned int)pixelFormatOfFrame:(id)arg1;
- (void)configureCompressionSession;
- (void)setEncoderBitrateBps:(unsigned int)arg1;
- (id)initWithCodecInfo:(id)arg1 simulcastIndex:(int)arg2;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9;

@end
