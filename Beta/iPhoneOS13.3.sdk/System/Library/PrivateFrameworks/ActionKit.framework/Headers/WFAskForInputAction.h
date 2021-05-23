/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@class NSString;

@interface WFAskForInputAction : WFHandleCustomIntentAction

@property (nonatomic, readonly) NSString *inputType;
@property (nonatomic, readonly) NSString *promptText;
@property (nonatomic, readonly) NSString *defaultAnswer;
@property (nonatomic, readonly) long long datePickerMode;
@property (nonatomic, readonly) _Bool immediatelyActivateWatchDictation;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)outputContentClasses;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runWithSiriUserInterface:(id)arg1 input:(id)arg2;
- (void)finishRunningWithResultText:(id)arg1;
- (void)finishRunningWithDate:(id)arg1;

@end
