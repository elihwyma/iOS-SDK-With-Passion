/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderQpThresholds : NSObject

{
    long long _low;
    long long _high;
}

@property (nonatomic, readonly) long long low;
@property (nonatomic, readonly) long long high;

- (id)initWithThresholdsLow:(long long)arg1 high:(long long)arg2;

@end
