/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AVVoiceTriggerClient : NSObject

{
    CDUnknownBlockType _voiceTriggerBlock;
    CDUnknownBlockType _speakerStateChangedBlock;
    CDUnknownBlockType _speakerMuteStateChangedBlock;
    CDUnknownBlockType _serverCrashedBlock;
    CDUnknownBlockType _serverResetBlock;
    NSXPCConnection *_voiceTriggerServerConnection;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) NSXPCConnection *voiceTriggerServerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) CDUnknownBlockType voiceTriggerBlock;
@property (copy, nonatomic) CDUnknownBlockType speakerStateChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType speakerMuteStateChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType serverCrashedBlock;
@property (copy, nonatomic) CDUnknownBlockType serverResetBlock;
@property (nonatomic, readonly) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (_Bool)isAPIAvailable;

- (id)init;
- (void)dealloc;
- (void)closeServerConnection;
- (void)voiceTriggerNotification:(id)arg1;
- (void)speakerStateChangedNotification:(id)arg1;
- (void)speakerMuteStateChangedNotification:(_Bool)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleMediaServerReset:(id)arg1;
- (void)callServerCrashedBlock;
- (void)callServerResetBlock;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(CDUnknownBlockType)arg1;
- (void)enableVoiceTriggerListening:(_Bool)arg1;
- (void)enableVoiceTriggerListening:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setListeningProperty:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enableSpeakerStateListening:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enableSpeakerStateListening:(_Bool)arg1;
- (void)speakerStateActiveCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)speakerStateActive;
- (void)speakerStateMutedCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)speakerStateMuted;
- (void)hasBargeInSupportCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasBargeInSupport;
- (void)enableBargeInMode:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateVoiceTriggerConfiguration:(id)arg1;
- (void)updateVoiceTriggerConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)listeningEnabledCompletionBlock:(CDUnknownBlockType)arg1;

@end
