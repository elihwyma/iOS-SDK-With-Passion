/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSString, VMVoicemailTranscriptionController, VMVoicemailTranscriptionTask;

@protocol OS_dispatch_queue;

@interface VMTranscriptionService : NSObject

{
    VMVoicemailTranscriptionTask *_transcriptionTask;
    VMVoicemailTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) VMVoicemailTranscriptionController *transcriptionController;
@property (retain, nonatomic) VMVoicemailTranscriptionTask *transcriptionTask;

+ (id)transcriptionLanguageCodes;
+ (_Bool)isSupportedTranscriptionLanguageCode:(id)arg1;
+ (_Bool)isTranscriptionAvailable;

- (id)init;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)processTranscriptForRecord:(const void *)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAFLanguageCodeDidChangeNotification:(id)arg1;
- (unsigned long long)failureReasonForError:(id)arg1;
- (void)unloadTranscriptionService;
- (void)loadTranscriptionService;
- (void)reportTranscriptionProblemForRecord:(const void *)arg1;
- (void)reportTranscriptionRatedAccurate:(_Bool)arg1 forRecord:(const void *)arg2;

@end
