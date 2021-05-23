/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewController.h>

#import <EventKitUI/Swift-Protocol.h>

@class EKCalendarItem, EKCalendarItemEditItem, EKChangeSet, EKEventStore, EKUIRecurrenceAlertController, NSArray, NSMutableSet, NSString, UIBarButtonItem, UIResponder, _UIAccessDeniedView;

@protocol EKCalendarItemEditorDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditor : UITableViewController <Swift>

{
    NSArray *_editItems;
    NSArray *_orderedEditItems;
    id _revertState;
    _Bool _showsTimeZone;
    NSArray *_currentItems;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKCalendarItemEditItem *_currentEditItem;
    _Bool _giveTitleCellKeyboardFocus;
    _Bool _needsFirstResponderSet;
    int _editItemVisibility;
    _Bool _isIgnoringCellHeightChange;
    _Bool _needsCellHeightChange;
    NSMutableSet *_editItemsDisablingDoneButton;
    long long _lastAuthorizationStatus;
    _Bool _hasAppeared;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_leftButtonSpacer;
    UIBarButtonItem *_rightButtonSpacer;
    double _leftButtonSpace;
    double _rightButtonSpace;
    _Bool _scrollToNotes;
    _Bool _canHideDoneAndCancelButtons;
    _Bool _timeImplicitlySet;
    _Bool _isTextEditing;
    id <EKCalendarItemEditorDelegate> _editorDelegate;
    EKEventStore *_store;
    EKCalendarItem *_calendarItem;
    UIResponder *_responderToRestoreOnAppearence;
    unsigned long long _visibleSectionToRestoreOnAppearence;
    _UIAccessDeniedView *_accessDeniedView;
    EKChangeSet *_originalChangeSet;
}

@property (retain, nonatomic) _UIAccessDeniedView *accessDeniedView;
@property (retain, nonatomic) EKChangeSet *originalChangeSet;
@property (weak, nonatomic) id <EKCalendarItemEditorDelegate> editorDelegate;
@property (retain, nonatomic) EKEventStore *store;
@property (retain, nonatomic) EKCalendarItem *calendarItem;
@property (nonatomic) _Bool scrollToNotes;
@property (retain, nonatomic) UIResponder *responderToRestoreOnAppearence;
@property (nonatomic) unsigned long long visibleSectionToRestoreOnAppearence;
@property (nonatomic) _Bool showsTimeZone;
@property (nonatomic) _Bool canHideDoneAndCancelButtons;
@property (readonly) EKCalendarItemEditItem *currentEditItem;
@property (nonatomic) double navBarLeftContentInset;
@property (nonatomic) double navBarRightContentInset;
@property (nonatomic) _Bool timeImplicitlySet;
@property (nonatomic) _Bool isTextEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultTitleForCalendarItem;
+ (id)_addLocalizedString;
+ (id)_doneLocalizedString;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)applicationDidResume;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (_Bool)hasUnsavedChanges;
- (void)done:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)cancel:(id)arg1;
- (unsigned long long)entityType;
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;
- (void)editItemVisibilityChanged:(id)arg1;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
- (id)viewControllerForEditItem:(id)arg1;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItem:(id)arg1 didSaveFromDetailViewController:(_Bool)arg2;
- (void)editItemDidEndEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;
- (void)editItem:(id)arg1 wantsKeyboardPinned:(_Bool)arg2;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (long long)rowNumberForEditItem:(id)arg1;
- (void)editItemRequiresHeightChange:(id)arg1;
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;
- (void)editItemWantsFooterTitlesToReload:(id)arg1;
- (void)_localeChanged;
- (void)refreshStartAndEndDates;
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1 forceCancel:(_Bool)arg2;
- (void)completeWithAction:(long long)arg1 animated:(_Bool)arg2;
- (void)handleTapOutside;
- (void)completeAndSave;
- (_Bool)willPresentDialogOnSave;
- (void)focus:(unsigned long long)arg1 select:(_Bool)arg2;
- (void)resignCurrentEditItemFirstResponder;
- (id)_editItems;
- (id)preferredTitle;
- (void)refreshInvitees;
- (void)refreshLocation;
- (unsigned long long)tableSectionForEditItem:(id)arg1;
- (void)deleteClicked:(id)arg1;
- (void)prepareEditItems;
- (id)_orderedEditItems;
- (_Bool)hasAttachmentChanges;
- (_Bool)attachmentsModifiedOnRecurrence;
- (id)attachmentsModifiedEvent;
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;
- (id)_nameForDeleteButton;
- (void)setupDeleteButton;
- (id)defaultAlertTitle;
- (id)notificationNamesForLocaleChange;
- (void)_copyEventForPossibleRevert;
- (void)_revertEvent;
- (id)_viewForSheet;
- (void)tableViewDidStartReload:(id)arg1;
- (void)_setUpKeyCommands;
- (void)storeChanged:(id)arg1;
- (void)setupForEvent;
- (_Bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;
- (void)_tableViewWillUpdateHeights;
- (void)_tableViewDidUpdateHeights;
- (void)_configureVisibleItems;
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(_Bool)arg3;
- (void)_updateDoneButtonState;
- (void)_setupFirstResponder;
- (void)_pinKeyboard:(_Bool)arg1;
- (void)updateNavButtonsWithSpacing;
- (void)_setShowingAccessDeniedView:(_Bool)arg1 showSettingsInstructions:(_Bool)arg2;
- (void)_keyboardWillHide;
- (void)_completeWithAction:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;
- (_Bool)_performSave:(long long)arg1 animated:(_Bool)arg2;
- (void)_presentAttachmentRecurrenceSheetForEvent:(id)arg1;
- (void)_presentDetachSheetForEvent:(id)arg1 saveAttachments:(_Bool)arg2;
- (void)_setCalendarItemOnEditItems;
- (_Bool)_canEnableDoneButton;
- (void)_setDoneAndCancelButtonVisible:(_Bool)arg1;
- (void)_setWantsToEnableDoneButton:(_Bool)arg1;
- (void)_reallyHandleCellHeightChange;
- (long long)firstTableRowForEditItem:(id)arg1;
- (id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long *)arg2;
- (void)_performDelete:(long long)arg1;
- (void)_performCloseKeyCommand;
- (void)setEditItemVisibility:(int)arg1 animated:(_Bool)arg2;
- (int)editItemVisibility;
- (id)_viewHierarchy;

@end
