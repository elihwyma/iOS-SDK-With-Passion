/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, WK_RTCVideoCodecInfo;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderH264 : NSObject

{
    NSMutableArray *_codecs;
    WK_RTCVideoCodecInfo *_codecInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setCallback:(CDUnknownBlockType)arg1;
- (id)implementationName;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)releaseEncoder;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (int)setRateAllocation:(id)arg1 framerate:(unsigned int)arg2;
- (id)scalingSettings;
- (id)initWithCodecInfo:(id)arg1;

@end
