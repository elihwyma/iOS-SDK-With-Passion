/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@protocol CSVTUIAudioSession

- (unsigned short)setDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)averagePower;
- (unsigned short)isRecording;
- (unsigned short)stopRecording;
- (unsigned short)audioSource;
- (unsigned short)hasAudioRoute;
- (unsigned short)releaseAudioSession;
- (unsigned short)startRecording;
- (unsigned short)setEndpointerDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMeters;
- (unsigned short)prepareRecord;
- (unsigned short)hasCorrectAudioRoute;
- (unsigned short)resetEndPointer;

@end
