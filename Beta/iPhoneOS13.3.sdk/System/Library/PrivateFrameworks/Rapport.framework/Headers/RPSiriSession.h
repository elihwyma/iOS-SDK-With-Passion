/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, AVVoiceController, NSString;

@protocol OS_dispatch_queue, RPMessageable;

@interface RPSiriSession : NSObject

{
    CDUnknownBlockType _activateCompletion;
    int _activateState;
    AVAudioFormat *_audioFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    RPSiriSession *_selfRef;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
    NSString *_destinationID;
    id <RPMessageable> _messenger;
}

@property (retain, nonatomic) NSString *destinationID;
@property (retain, nonatomic) id <RPMessageable> messenger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activate2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)_activateCompletedWithError:(id)arg1;
- (_Bool)voiceControllerSetupAndReturnError:(id *)arg1;
- (void)voiceControllerTearDown;

@end
