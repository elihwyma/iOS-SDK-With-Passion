/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACRecordedUserActionFlow, NSMutableArray;

@interface CACRecordedUserActionManager : NSObject

{
    NSMutableArray *_recordedUserActions;
    CACRecordedUserActionFlow *_executingUserActionFlow;
    _Bool _isRecording;
    _Bool _isExecuting;
}

@property (readonly) _Bool isRecording;
@property (readonly) _Bool isExecuting;

+ (id)sharedManager;

- (id)init;
- (void)cancelExecution;
- (void)addRecognizedSpokenCommand:(id)arg1;
- (void)startRecordingUserActions;
- (void)stopRecordingUserActions;
- (id)recordedUserActionFlow;
- (void)beginExecutingRecordedUserActionFlow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
