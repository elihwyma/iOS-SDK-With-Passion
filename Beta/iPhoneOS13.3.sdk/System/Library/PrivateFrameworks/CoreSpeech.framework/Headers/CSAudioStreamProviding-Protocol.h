/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@protocol CSAudioStreamProviding <Swift>

- (unsigned short)isRecording;
- (unsigned short)recordRoute;
- (unsigned short)setCurrentContext:error: /* Error: Ran out of types for this method. */;
- (unsigned short)recordSettings;
- (unsigned short)playbackRoute;
- (unsigned short)saveRecordingBufferFrom:to:toURL: /* Error: Ran out of types for this method. */;
- (unsigned short)audioStreamWithRequest:streamName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)holdAudioStreamWithDescription:timeout: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAudioStreamHold: /* Error: Ran out of types for this method. */;
- (unsigned short)isNarrowBand;
- (unsigned short)recordDeviceInfo;
- (unsigned short)audioStreamWithRequest:streamName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareAudioStreamSync:request:error: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareAudioStream:request:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)startAudioStream:option:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopAudioStream:option:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)audioChunkFrom:to: /* Error: Ran out of types for this method. */;
- (unsigned short)audioChunkToEndFrom: /* Error: Ran out of types for this method. */;
- (unsigned short)saveRecordingBufferToEndFrom:toURL: /* Error: Ran out of types for this method. */;

@end
