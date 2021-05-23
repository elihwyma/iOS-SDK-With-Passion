/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, WFAlertButton;

@interface WFItemPickerViewController : UITableViewController <Swift>

{
    NSString *_prompt;
    NSArray *_allButtons;
    NSArray *_buttons;
    NSArray *_trailingNavigationButtons;
    WFAlertButton *_leadingNavigationButton;
}

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *allButtons;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *trailingNavigationButtons;
@property (retain, nonatomic) WFAlertButton *leadingNavigationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)presentAlert:(id)arg1 withUserInterface:(id)arg2;

- (void)cancel;
- (_Bool)accessibilityPerformEscape;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)initWithAlert:(id)arg1;
- (void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3;
- (void)dismissAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setButtons:(id)arg1 forAlert:(id)arg2;
- (void)trailingNavigationButtonTapped:(id)arg1;
- (void)reloadNavigationItems;
- (id)paletteForPrompt:(id)arg1;
- (id)filteredButtons;

@end
