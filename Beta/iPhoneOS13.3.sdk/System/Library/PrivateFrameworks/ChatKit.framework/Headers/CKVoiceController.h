/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class AVVoiceController, CKAudioAnalyzer, NSDictionary, NSString;

@protocol CKVoiceControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CKVoiceController : NSObject

{
    id <CKVoiceControllerDelegate> _delegate;
    long long __activationMode;
    NSDictionary *_recordSettings;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_powerUpdateTimer;
    AVVoiceController *_voiceController;
    CKAudioAnalyzer *_audioAnalyzer;
}

@property (nonatomic, setter=_setActivationMode:) long long _activationMode;
@property (copy, nonatomic) NSDictionary *recordSettings;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerUpdateTimer;
@property (retain, nonatomic) AVVoiceController *voiceController;
@property (retain, nonatomic) CKAudioAnalyzer *audioAnalyzer;
@property (weak, nonatomic) id <CKVoiceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)cleanup;
- (void)setActivationMode:(long long)arg1;
- (void)record;
- (void)releaseAudioSession;
- (void)playAlertSoundForType:(int)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)messageSent:(id)arg1;
- (void)voiceControllerDidStopRecordingForClientError;
- (void)stopUpdatingPower;
- (void)startUpdatingPower;
- (id)initWithActivationMode:(long long)arg1 recordSettings:(id)arg2 queue:(id)arg3;

@end
