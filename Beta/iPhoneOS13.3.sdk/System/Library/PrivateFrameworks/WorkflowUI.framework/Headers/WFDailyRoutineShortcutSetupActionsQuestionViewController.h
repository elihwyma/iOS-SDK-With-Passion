/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString, WFDailyRoutineShortcutSetupActionsQuestion;

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupActionsQuestionViewController : OBWelcomeController

{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupActionsQuestion *_question;
}

@property (weak, nonatomic) id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupActionsQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool parentShouldShowSkipButton;

- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)initWithQuestion:(id)arg1;
- (void)didSelectSkipButton;
- (void)didSelectAddButton;

@end
