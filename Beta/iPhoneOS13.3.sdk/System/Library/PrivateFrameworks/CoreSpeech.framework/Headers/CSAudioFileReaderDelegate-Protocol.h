/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@protocol CSAudioFileReaderDelegate <Swift>

- (unsigned short)audioFileReaderDidStartRecording:successfully:error: /* Error: Ran out of types for this method. */;
- (unsigned short)audioFileReaderBufferAvailable:buffer:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)audioFileReaderDidStopRecording:forReason: /* Error: Ran out of types for this method. */;

@end
