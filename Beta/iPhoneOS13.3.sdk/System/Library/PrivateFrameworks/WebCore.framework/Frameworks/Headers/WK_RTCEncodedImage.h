/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface WK_RTCEncodedImage : NSObject

{
    unsigned char _flags;
    _Bool _completeFrame;
    int _encodedWidth;
    int _encodedHeight;
    unsigned int _timeStamp;
    int _spatialIndex;
    NSData *_buffer;
    long long _captureTimeMs;
    long long _ntpTimeMs;
    long long _encodeStartMs;
    long long _encodeFinishMs;
    unsigned long long _frameType;
    long long _rotation;
    NSNumber *_qp;
    unsigned long long _contentType;
}

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) int encodedWidth;
@property (nonatomic) int encodedHeight;
@property (nonatomic) unsigned int timeStamp;
@property (nonatomic) long long captureTimeMs;
@property (nonatomic) long long ntpTimeMs;
@property (nonatomic) unsigned char flags;
@property (nonatomic) long long encodeStartMs;
@property (nonatomic) long long encodeFinishMs;
@property (nonatomic) unsigned long long frameType;
@property (nonatomic) long long rotation;
@property (nonatomic) _Bool completeFrame;
@property (retain, nonatomic) NSNumber *qp;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) int spatialIndex;

- (id)initWithNativeEncodedImage:(struct EncodedImage)arg1;
- (struct EncodedImage)nativeEncodedImage;

@end
