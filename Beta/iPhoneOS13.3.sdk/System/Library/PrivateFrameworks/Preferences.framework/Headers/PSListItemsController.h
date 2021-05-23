/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSListItemsController

{
    long long _rowToSelect;
    _Bool _deferItemSelection;
    _Bool _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id _retainedTarget;
}

- (void)suspend;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)didLock;
- (void)prepareSpecifiersMetadata;
- (void)scrollToSelectedCell;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (void)setRowToSelect;
- (void)listItemSelected:(id)arg1;
- (void)_addStaticText:(id)arg1;
- (id)itemsFromParent;
- (id)itemsFromDataSource;
- (_Bool)isRestrictionList;
- (void)setIsRestrictionList:(_Bool)arg1;

@end
