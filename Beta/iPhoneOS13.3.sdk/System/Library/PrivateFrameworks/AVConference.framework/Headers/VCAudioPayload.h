/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioPayload : NSObject

{
    struct SoundDec_t *_encoder;
    VCAudioPayloadConfig *_config;
    unsigned int _bitrate;
    _Bool _shouldReset;
}

@property (nonatomic, readonly) VCAudioPayloadConfig *config;
@property (nonatomic, readonly) unsigned int bitrate;

- (void)dealloc;
- (id)description;
- (id)initWithConfig:(id)arg1;
- (void)setCurrentDTXEnable:(_Bool)arg1;
- (_Bool)setBitrate:(unsigned int)arg1;
- (_Bool)getMagicCookie:(char *)arg1 withLength:(unsigned int *)arg2;
- (_Bool)createEncoderWithInputFormat:(struct AudioStreamBasicDescription *)arg1;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4;
- (_Bool)isDTXEmptyPacket:(unsigned int)arg1;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;

@end
