/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerManagementViewController : _UIContainerHuggingTableViewController

{
    NSArray *_allPickers;
    NSArray *_fileTypes;
    unsigned long long _mode;
}

@property (retain, nonatomic) NSArray *allPickers;
@property (retain, nonatomic) NSArray *fileTypes;
@property (nonatomic) unsigned long long mode;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)_doneButtonPressed;
- (void)_updateContentSize;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2;
- (void)switchToggled:(id)arg1;

@end
