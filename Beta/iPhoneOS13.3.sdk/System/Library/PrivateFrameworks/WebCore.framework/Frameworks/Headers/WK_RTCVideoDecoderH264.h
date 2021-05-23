/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoDecoderH264 : NSObject

{
    struct opaqueCMFormatDescription *_videoFormat;
    struct OpaqueCMMemoryPool *_memoryPool;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    CDUnknownBlockType _callback;
    int _error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setError:(int)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)setVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)releaseDecoder;
- (long long)decode:(id)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (id)implementationName;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)destroyDecompressionSession;
- (int)resetDecompressionSession;
- (void)configureDecompressionSession;

@end
