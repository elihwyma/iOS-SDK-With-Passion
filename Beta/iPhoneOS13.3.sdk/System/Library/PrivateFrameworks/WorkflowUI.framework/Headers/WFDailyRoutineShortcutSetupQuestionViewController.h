/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, WFDailyRoutineShortcutSetupQuestion;

@protocol WFDailyRoutineShortcutSetupQuestionViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupQuestionViewController : UIViewController

{
    id <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupQuestion *_question;
}

@property (weak, nonatomic) id <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithQuestion:(id)arg1;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(id)arg1;
- (void)dailyRoutineShortcutSetupQuestionChildViewController:(id)arg1 didSelectActions:(id)arg2;
- (void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(id)arg1;
- (void)didSelectSkip;

@end
