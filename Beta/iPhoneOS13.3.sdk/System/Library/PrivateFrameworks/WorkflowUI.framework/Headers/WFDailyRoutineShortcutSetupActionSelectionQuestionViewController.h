/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, WFActionDrawerResults, WFDailyRoutineShortcutSetupActionSelectionQuestion;

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController

{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupActionSelectionQuestion *_question;
    WFActionDrawerResults *_results;
}

@property (retain, nonatomic) WFActionDrawerResults *results;
@property (weak, nonatomic) id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupActionSelectionQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool parentShouldShowSkipButton;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (id)initWithQuestion:(id)arg1;
- (void)loadResults;

@end
