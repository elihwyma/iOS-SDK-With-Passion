/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (nonatomic, readonly) unsigned int packetCapacity;
@property (nonatomic) unsigned int packetCount;
@property (nonatomic, readonly) long long maximumPacketSize;
@property (nonatomic, readonly) void *data;
@property (nonatomic, readonly) unsigned int byteCapacity;
@property (nonatomic) unsigned int byteLength;
@property (nonatomic, readonly) struct AudioStreamPacketDescription *packetDescriptions;

- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2 maximumPacketSize:(long long)arg3;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2;

@end
