/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WK_RTCRtpEncodingParameters : NSObject

{
    _Bool _isActive;
    NSNumber *_maxBitrateBps;
    NSNumber *_minBitrateBps;
    NSNumber *_maxFramerate;
    NSNumber *_numTemporalLayers;
    NSNumber *_ssrc;
}

@property (nonatomic, readonly) struct RtpEncodingParameters nativeParameters;
@property (nonatomic) _Bool isActive;
@property (copy, nonatomic) NSNumber *maxBitrateBps;
@property (copy, nonatomic) NSNumber *minBitrateBps;
@property (copy, nonatomic) NSNumber *maxFramerate;
@property (copy, nonatomic) NSNumber *numTemporalLayers;
@property (nonatomic, readonly) NSNumber *ssrc;

- (id)init;
- (id)initWithNativeParameters:(const struct RtpEncodingParameters *)arg1;

@end
