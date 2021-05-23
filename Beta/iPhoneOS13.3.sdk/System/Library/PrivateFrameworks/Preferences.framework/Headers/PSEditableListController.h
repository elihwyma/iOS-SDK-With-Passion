/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableListController

{
    _Bool _editable;
    _Bool _editingDisabled;
}

- (id)init;
- (void)suspend;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditable:(_Bool)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)editable;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)didLock;
- (void)editDoneTapped;
- (id)_editButtonBarItem;
- (void)_updateNavigationBar;
- (void)_setEditable:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)performDeletionActionForSpecifier:(id)arg1;
- (void)setEditingButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditButtonEnabled:(_Bool)arg1;

@end
