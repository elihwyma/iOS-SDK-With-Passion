/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioRecorder, NSString;

@protocol OS_dispatch_queue;

@interface CSFallbackAudioSessionReleaseProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioRecorder *_audioRecorder;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioRecorder *audioRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAudioRecorder:(id)arg1;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;
- (void)audioRecorderWillBeDestroyed:(id)arg1;
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;

@end
