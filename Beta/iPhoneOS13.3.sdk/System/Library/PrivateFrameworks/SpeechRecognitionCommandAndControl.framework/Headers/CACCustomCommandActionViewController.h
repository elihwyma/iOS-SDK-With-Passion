/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UITableViewController.h>

@class AXSiriShortcut, CACSpokenCommandItem, NSString;

@protocol CACCustomCommandActionViewControllerDelegate;

@interface CACCustomCommandActionViewController : UITableViewController

{
    _Bool _isPresentingGestureRecorder;
    id <CACCustomCommandActionViewControllerDelegate> _delegate;
    CACSpokenCommandItem *_commandItem;
    AXSiriShortcut *_selectedShortcutForCommand;
}

@property (nonatomic) _Bool isPresentingGestureRecorder;
@property (retain, nonatomic) AXSiriShortcut *selectedShortcutForCommand;
@property (weak, nonatomic) id <CACCustomCommandActionViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)isModalInPresentation;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (void)gestureRecorder:(id)arg1 saveReplayableGesture:(id)arg2;
- (void)didSelectShortcut:(id)arg1;
- (_Bool)_shouldDisallowSelectingRowAtIndexPath:(id)arg1;
- (void)_updateForAction:(long long)arg1;
- (_Bool)_useDetailCell;
- (id)_stringFromPasteboardDataArray:(id)arg1;

@end
