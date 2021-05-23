/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFPopoverSizingTableViewController.h>

@class NSArray, NSString, UITextField, WebBookmark, WebBookmarkCollection, _SFBookmarkTextEntryTableViewCell, _SFSiteIconView;

@protocol _SFBookmarkInfoViewControllerDelegate;

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController

{
    WebBookmarkCollection *_collection;
    WebBookmark *_parentBookmark;
    NSArray *_childBookmarks;
    _Bool _addingBookmark;
    _Bool _saveWhenDismissed;
    _SFBookmarkTextEntryTableViewCell *_titleCell;
    _SFBookmarkTextEntryTableViewCell *_addressCell;
    _SFSiteIconView *_iconImageView;
    unsigned long long _editingField;
    _Bool _didSelectFolder;
    _Bool _folderPickerExpanded;
    _Bool _addingToFavorites;
    NSArray *_folders;
    long long _selectedFolderIndex;
    UITextField *_textFieldToRestoreFirstResponder;
    _Bool _enableAddFolder;
    id <_SFBookmarkInfoViewControllerDelegate> _delegate;
    WebBookmark *_bookmark;
}

@property (weak, nonatomic) id <_SFBookmarkInfoViewControllerDelegate> delegate;
@property (copy, nonatomic) WebBookmark *bookmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setParent:(id)arg1;
- (void)cancel;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)keyCommands;
- (void)saveChanges;
- (id)_titleCell;
- (id)initWithBookmark:(id)arg1 childBookmarks:(id)arg2 inCollection:(id)arg3 addingBookmark:(_Bool)arg4 toFavorites:(_Bool)arg5 willBeDisplayedModally:(_Bool)arg6;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (void)updateTranslucentAppearance;
- (_Bool)hasTranslucentAppearance;
- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
- (void)cancelPopoverKeyPressed;
- (void)_saveButtonPressed;
- (void)_bookmarksDidReload:(id)arg1;
- (_Bool)_canEditFieldsInCurrentViewController;
- (void)_didBeginEditingTextField:(id)arg1;
- (void)_didChangeEditingTextField:(id)arg1;
- (void)_setFolderPickerExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removeActionsForTextFields;
- (void)_addActionsForTextFields;
- (void)_createCellsIfNeeded;
- (void)updateBookmarkIcon;
- (void)_reloadFolderInfoForced:(_Bool)arg1;
- (void)_updateCellValues;
- (struct CGPoint)_centerForIconView;
- (struct UIEdgeInsets)_cellInset;
- (void)_updateSaveButton;
- (_Bool)canSaveChanges;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(_Bool)arg3;
- (_Bool)_isIndexPathForNewFolderRow:(id)arg1;
- (void)_createNewFolder;
- (void)_editField:(unsigned long long)arg1;
- (long long)_numberOfExpandedFolderPickerRows;
- (id)_cellForNewFolderRowWithTableView:(id)arg1;
- (id)_cellForExpandedFolderAtIndex:(long long)arg1 withTableView:(id)arg2;
- (id)_cellForParentBookmarkWithTableView:(id)arg1;
- (id)_dequeueFolderPickerCellFromTableView:(id)arg1;
- (id)_iconForViewCellGivenBookmark:(id)arg1;
- (_Bool)isEditingField;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)_valuesChanged;
- (void)_updateIconViewFrame;
- (void)_saveBookmarkKeyPressed;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (_Bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (_Bool)titleCellHasText;

@end
