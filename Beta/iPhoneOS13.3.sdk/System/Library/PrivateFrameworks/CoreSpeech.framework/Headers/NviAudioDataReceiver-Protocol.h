/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@protocol NviAudioDataReceiver <Swift>

@property (nonatomic, readonly) _Bool receiveOnlyProcessedChannelData;

- (unsigned short)audioChunkAvailable:numChannels:numSamplesPerChannel:startSampleId:atAbsMachTimestamp: /* Error: Ran out of types for this method. */;

@end
