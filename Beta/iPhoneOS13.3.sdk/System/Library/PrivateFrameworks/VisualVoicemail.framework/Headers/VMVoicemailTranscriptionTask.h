/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class VMVoicemailTranscriptionController;

@protocol OS_dispatch_queue;

@interface VMVoicemailTranscriptionTask : NSObject

{
    _Bool _taskRunning;
    _Bool _hasInsomniaAssertion;
    VMVoicemailTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic, getter=isTaskRunning) _Bool taskRunning;
@property (nonatomic) _Bool hasInsomniaAssertion;
@property (weak, nonatomic) VMVoicemailTranscriptionController *transcriptionController;

+ (void)resetRetranscriptionTaskState;

- (id)init;
- (void)dealloc;
- (void)setLastExecutionDate:(id)arg1;
- (id)allVoicemails;
- (void)_endRetranscribingTask;
- (_Bool)confidenceModelExistsOnDevice;
- (id)speechAssetsOnDevice;
- (_Bool)speechAssetHasConfidenceModel:(id)arg1;
- (id)speechAssetsWithConfidenceModelsOnDevice;
- (id)voicemailsMatchingFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (id)allVoicemailsWithTranscription;
- (_Bool)voicemailWasTranscribedWithoutConfidence:(id)arg1;
- (void)cancelAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (_Bool)deviceHasSpeechAssets;
- (_Bool)shouldRunTranscriptionTask;
- (void)processTranscriptForVoicemail:(id)arg1;
- (void)_startRetranscribingVoicemailsIfNecessaryTranscribingAllVoicemails:(_Bool)arg1;
- (id)lastTaskExecutionDate;
- (void)setAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (_Bool)alreadyAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (id)allVoicemailsWithoutTranscription;
- (id)allVoicemailsTranscribedWithoutConfidence;
- (void)retranscribeAllVoicemails;

@end
