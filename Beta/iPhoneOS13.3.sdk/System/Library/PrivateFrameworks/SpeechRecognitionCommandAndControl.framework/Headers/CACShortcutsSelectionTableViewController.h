/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UITableViewController.h>

@class AXSiriShortcut, NSArray, NSIndexPath, NSString;

@protocol CACShortcutsSelectionDelegate;

@interface CACShortcutsSelectionTableViewController : UITableViewController

{
    id <CACShortcutsSelectionDelegate> _shortcutsSelectionDelegate;
    NSArray *_cachedShortcuts;
    AXSiriShortcut *_previouslySelectedShortcut;
    NSIndexPath *_previouslySelectedIndex;
    NSString *_shortcutsToken;
}

@property (retain, nonatomic) NSArray *cachedShortcuts;
@property (retain, nonatomic) AXSiriShortcut *previouslySelectedShortcut;
@property (retain, nonatomic) NSIndexPath *previouslySelectedIndex;
@property (retain, nonatomic) NSString *shortcutsToken;
@property (retain, nonatomic) id <CACShortcutsSelectionDelegate> shortcutsSelectionDelegate;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelButtonAction;
- (void)shortcutsDidChange:(id)arg1;
- (id)initWithPreviouslySelectedShortcut:(id)arg1;

@end
