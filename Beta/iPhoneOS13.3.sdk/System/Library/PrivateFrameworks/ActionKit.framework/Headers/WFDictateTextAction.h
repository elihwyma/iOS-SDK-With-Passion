/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class AFDictationConnection, NSString;

@protocol WFDictateTextActionRunningDelegate;

@interface WFDictateTextAction : WFAction

{
    id <WFDictateTextActionRunningDelegate> _delegate;
    AFDictationConnection *_dictationConnection;
    NSString *_latestTranscription;
}

@property (retain, nonatomic) AFDictationConnection *dictationConnection;
@property (copy, nonatomic) NSString *latestTranscription;
@property (weak, nonatomic) id <WFDictateTextActionRunningDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)stopListening;
- (id)recognitionError;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)finishRunningWithError:(id)arg1;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;

@end
