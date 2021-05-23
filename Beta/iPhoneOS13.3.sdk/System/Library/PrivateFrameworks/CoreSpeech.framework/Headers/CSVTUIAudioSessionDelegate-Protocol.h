/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@protocol CSVTUIAudioSessionDelegate <Swift>

- (unsigned short)audioSessionDidStartRecording:error: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionDidStopRecording: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionRecordBufferAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionErrorDidOccur: /* Error: Ran out of types for this method. */;
- (unsigned short)audioSessionUnsupportedAudioRoute;

@end
