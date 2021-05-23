/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioPowerMeter, CSAudioRecorder, NSString;

@protocol CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionRemote : NSObject

{
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVTUIAudioSessionDelegate> _delegate;
    CSAudioPowerMeter *_powerMeter;
    unsigned long long _audioStreamHandleId;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (weak, nonatomic) id <CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (float)averagePower;
- (_Bool)isRecording;
- (void)stopRecording;
- (unsigned long long)audioSource;
- (_Bool)hasAudioRoute;
- (void)releaseAudioSession;
- (_Bool)startRecording;
- (void)setEndpointerDelegate:(id)arg1;
- (void)updateMeters;
- (_Bool)prepareRecord;
- (_Bool)hasCorrectAudioRoute;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;
- (void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;
- (void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDisconnected:(id)arg1;
- (id)_audioRecorder;
- (long long)convertStopReason:(long long)arg1;
- (void)_handleDidStopWithReason:(long long)arg1;
- (void)resetEndPointer;

@end
