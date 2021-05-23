/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSRemoteRecordClientDelegate, OS_dispatch_queue;

@interface CSRemoteRecordClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSRemoteRecordClientDelegate> _delegate;
}

@property (weak, nonatomic) id <CSRemoteRecordClientDelegate> delegate;

- (id)init;
- (void)dealloc;
- (_Bool)isConnected;
- (_Bool)isRecording;
- (id)voiceTriggerEventInfo;
- (_Bool)stopRecording:(id *)arg1;
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;
- (_Bool)startRecordingWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)didPlayEndpointBeep;
- (_Bool)hasPendingTwoShotBeep;

@end
