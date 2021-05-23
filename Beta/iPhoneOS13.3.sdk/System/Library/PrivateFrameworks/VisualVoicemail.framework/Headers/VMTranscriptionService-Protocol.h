/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/Swift-Protocol.h>

@class VMVoicemailTranscriptionController, VMVoicemailTranscriptionTask;

@protocol VMTranscriptionService <Swift>

@property (retain, nonatomic) VMVoicemailTranscriptionController *transcriptionController;
@property (retain, nonatomic) VMVoicemailTranscriptionTask *transcriptionTask;

+ (unsigned short)transcriptionLanguageCodes;
+ (unsigned short)isTranscriptionAvailable;

- (unsigned short)processTranscriptForRecord:priority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unloadTranscriptionService;
- (unsigned short)loadTranscriptionService;
- (unsigned short)reportTranscriptionProblemForRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)reportTranscriptionRatedAccurate:forRecord: /* Error: Ran out of types for this method. */;

@end
