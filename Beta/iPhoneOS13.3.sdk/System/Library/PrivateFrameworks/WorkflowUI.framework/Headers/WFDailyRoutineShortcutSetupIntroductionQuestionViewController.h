/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class NSString, WFDailyRoutineShortcutSetupIntroductionQuestion;

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController

{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupIntroductionQuestion *_question;
}

@property (weak, nonatomic) id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupIntroductionQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool parentShouldShowSkipButton;

- (id)initWithQuestion:(id)arg1;
- (void)didSelectContinueButton;

@end
