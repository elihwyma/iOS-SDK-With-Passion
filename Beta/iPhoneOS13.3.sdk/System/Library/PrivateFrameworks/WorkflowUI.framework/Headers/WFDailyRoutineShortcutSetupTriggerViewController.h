/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class WFDailyRoutineShortcutSetupTriggerBuilder;

@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController

{
    id <WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupTriggerBuilder *_trigger;
}

@property (weak, nonatomic) id <WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupTriggerBuilder *trigger;

- (id)initWithTrigger:(id)arg1;
- (void)didSelectAddTriggerButton;
- (void)didSelectSkipButton;

@end
