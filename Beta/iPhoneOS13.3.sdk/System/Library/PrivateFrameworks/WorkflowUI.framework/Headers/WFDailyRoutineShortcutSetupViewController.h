/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class CLCircularRegion, NSMutableArray, NSMutableDictionary, NSString, UINavigationController, WFDailyRoutineShortcutSetupFlow;

@protocol WFDailyRoutineShortcutSetupViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupViewController : UIViewController

{
    id <WFDailyRoutineShortcutSetupViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupFlow *_flow;
    UINavigationController *_setupNavigationController;
    NSMutableDictionary *_actionsPerQuestionIndex;
    CLCircularRegion *_selectedRegion;
    NSMutableArray *_setupStepEvents;
}

@property (retain, nonatomic) UINavigationController *setupNavigationController;
@property (retain, nonatomic) NSMutableDictionary *actionsPerQuestionIndex;
@property (retain, nonatomic) CLCircularRegion *selectedRegion;
@property (retain, nonatomic) NSMutableArray *setupStepEvents;
@property (weak, nonatomic) id <WFDailyRoutineShortcutSetupViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithFlow:(id)arg1;
- (void)didSelectCancel;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)locationPickerDidCancel:(id)arg1;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)arg1;
- (void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)arg1;
- (void)dailyRoutineShortcutSetupQuestionViewController:(id)arg1 didAddActions:(id)arg2;
- (void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)arg1;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)arg1;
- (long long)currentQuestionIndex;
- (void)pushTriggerSetupStep;
- (void)pushStepForQuestion:(id)arg1;
- (void)pushToNextStep;
- (void)configureBackButtonOnViewController:(id)arg1;
- (void)finishWithTrigger:(id)arg1;
- (id)currentStepEvent;
- (void)submitMetrics:(_Bool)arg1;

@end
