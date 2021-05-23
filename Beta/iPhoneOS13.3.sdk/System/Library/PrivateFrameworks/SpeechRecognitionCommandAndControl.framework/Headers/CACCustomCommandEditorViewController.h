/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UITableViewController.h>

@class AXSiriShortcutsManager, CACSpokenCommandItem, NSDictionary, NSString, UIBarButtonItem;

@protocol CACCustomCommandEditorViewControllerDelegate;

@interface CACCustomCommandEditorViewController : UITableViewController

{
    NSDictionary *_applicationIdentifiersToNames;
    _Bool _isInEditingMode;
    _Bool _isValidCommandItem;
    _Bool _isEmptyCommandItem;
    _Bool _hasEmptySpokenString;
    _Bool _showsDeleteButton;
    id <CACCustomCommandEditorViewControllerDelegate> _delegate;
    CACSpokenCommandItem *_commandItem;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_editButton;
    CACSpokenCommandItem *_mutableCommandItem;
    AXSiriShortcutsManager *_shortcutsManager;
}

@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *editButton;
@property (retain, nonatomic) CACSpokenCommandItem *mutableCommandItem;
@property (retain, nonatomic) AXSiriShortcutsManager *shortcutsManager;
@property (nonatomic) _Bool isInEditingMode;
@property (weak, nonatomic) id <CACCustomCommandEditorViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (nonatomic) _Bool isValidCommandItem;
@property (nonatomic) _Bool isEmptyCommandItem;
@property (nonatomic) _Bool hasEmptySpokenString;
@property (nonatomic) _Bool showsDeleteButton;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)cancelAction;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)isModalInPresentation;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)_shouldShowDeleteButton;
- (void)doneButtonTapped:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)saveButtonTapped;
- (_Bool)isNewCommand;
- (void)configureNavItems;
- (_Bool)showAlertIfNeededForAnyError;
- (_Bool)_hasValidSpokenStringWithErrorText:(inout id *)arg1;
- (_Bool)_hasValidActionWithErrorText:(inout id *)arg1;
- (void)_showErrorAlertWithText:(id)arg1;
- (_Bool)showAlertIfNeededForErrorInSpokenString;
- (_Bool)_showAlertIfNeededForAction;
- (_Bool)_commandStringIsValid:(id)arg1 checkForLength:(_Bool)arg2;
- (void)_updateCommandItemWithText:(id)arg1;
- (void)didUpdateCommandItemForActionViewController:(id)arg1;
- (void)didDismissActionViewController:(id)arg1;
- (void)didUpdateCommandItemForApplicationViewController:(id)arg1;

@end
