/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol VideoEncoderInterfaceDelegate;

@interface VideoEncoderInterface : NSObject

{
    struct HEVCLosslessEncoder *m_encoder;
    _Bool m_encoderInitialized;
    double m_expectedFrameRate;
    int m_qpValue;
    NSString *m_stream;
    id <VideoEncoderInterfaceDelegate> m_delegate;
    unsigned int _lastEncodingStatus;
    unsigned int _lastEncodingInfoFlags;
}

@property (readonly) unsigned int lastEncodingStatus;
@property (readonly) unsigned int lastEncodingInfoFlags;

+ (struct __CVBuffer *)createHEVCCompatiblePixelBuffer:(struct __CVBuffer *)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeFrame:(struct __CVBuffer *)arg1 pst:(CDStruct_198678f7)arg2 frameProperties:(struct __CFDictionary *)arg3 metadata:(id)arg4;
- (void)closeEncoder;
- (id)initWithExpectedFrameRate:(double)arg1 forStream:(id)arg2 delegate:(id)arg3;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 pts:(CDStruct_198678f7)arg2 metadata:(id)arg3 withStatus:(int)arg4 andFlags:(unsigned int)arg5;
- (void)skipFrameWithStatus:(int)arg1 andFlags:(unsigned int)arg2;
- (void)setupEncoderWithWidth:(int)arg1 andHeight:(int)arg2 imageFormat:(int)arg3 andFramerate:(double)arg4;
- (void)useQPEncoding:(int)arg1;

@end
