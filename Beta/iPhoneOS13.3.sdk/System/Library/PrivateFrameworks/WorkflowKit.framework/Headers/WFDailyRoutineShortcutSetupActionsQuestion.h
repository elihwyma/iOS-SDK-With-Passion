/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDailyRoutineShortcutSetupQuestion.h>

@class NSArray, NSString, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion, WFImage;

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion

{
    NSArray *_actions;
    NSString *_addButtonTitle;
    NSString *_skipButtonTitle;
    WFImage *_icon;
    WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *_followUpQuestion;
}

@property (copy, nonatomic, readonly) NSArray *actions;
@property (copy, nonatomic) NSString *addButtonTitle;
@property (copy, nonatomic) NSString *skipButtonTitle;
@property (retain, nonatomic) WFImage *icon;
@property (retain, nonatomic) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion;

- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;

@end
