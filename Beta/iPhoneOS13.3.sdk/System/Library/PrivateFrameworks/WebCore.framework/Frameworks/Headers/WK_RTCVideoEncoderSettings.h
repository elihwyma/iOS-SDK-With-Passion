/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderSettings : NSObject

{
    struct VideoCodec _nativeVideoCodec;
    unsigned short _width;
    unsigned short _height;
    unsigned int _startBitrate;
    unsigned int _maxBitrate;
    unsigned int _minBitrate;
    unsigned int _targetBitrate;
    unsigned int _maxFramerate;
    unsigned int _qpMax;
    NSString *_name;
    unsigned long long _mode;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned short width;
@property (nonatomic) unsigned short height;
@property (nonatomic) unsigned int startBitrate;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic) unsigned int minBitrate;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int maxFramerate;
@property (nonatomic) unsigned int qpMax;
@property (nonatomic) unsigned long long mode;

- (id).cxx_construct;
- (id)initWithNativeVideoCodec:(const struct VideoCodec *)arg1;
- (struct VideoCodec)nativeVideoCodec;

@end
