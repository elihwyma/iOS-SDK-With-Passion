/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVVCAudioBuffer : NSObject

{
    void *_impl;
}

@property (readonly) int channels;
@property (readonly) int bytesCapacity;
@property int bytesDataSize;
@property (readonly) void *data;
@property (readonly) int packetDescriptionCapacity;
@property (readonly) int packetDescriptionCount;
@property (readonly) struct AudioStreamPacketDescription *packetDescriptions;
@property (readonly) unsigned long long timeStamp;
@property (readonly) struct AudioStreamBasicDescription *streamDescription;
@property (readonly) _Bool remoteVoiceActivityAvailable;
@property (readonly) unsigned char remoteVoiceActivityRMS;
@property (readonly) unsigned char remoteVoiceActivityVAD;

- (void)dealloc;
- (void)finalize;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;

@end
