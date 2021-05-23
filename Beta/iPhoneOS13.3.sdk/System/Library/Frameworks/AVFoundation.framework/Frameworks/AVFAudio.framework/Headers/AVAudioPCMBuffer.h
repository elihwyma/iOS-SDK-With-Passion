/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioBuffer.h>

@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (nonatomic, readonly) NSArray *peakPowerPerChannel;
@property (nonatomic, readonly) NSArray *averagePowerPerChannel;
@property (nonatomic, readonly) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (nonatomic, readonly) unsigned long long stride;
@property (nonatomic, readonly) float **floatChannelData;
@property (nonatomic, readonly) short **int16ChannelData;
@property (nonatomic, readonly) int **int32ChannelData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;
- (void)setByteLength:(unsigned int)arg1;
- (void)_initChannelPtrs;
- (_Bool)appendDataFromBuffer:(id)arg1;
- (_Bool)appendDataFromBuffer:(id)arg1 channel:(long long)arg2;
- (id)splitIntoSingleChannelBuffers;
- (id)calculatePower:(unsigned long long)arg1;
- (float)calculatePower:(unsigned long long)arg1 forFloatData:(float *)arg2 stride:(long long)arg3 frameLength:(unsigned int)arg4;

@end
