/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSEditableListController.h>

@interface PSUsageBundleDetailController : PSEditableListController

+ (void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2;
+ (id)mediaGroups;

- (void)loadView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(_Bool)arg2;
- (id)sizeForSpecifier:(id)arg1;
- (id)size:(id)arg1;

@end
