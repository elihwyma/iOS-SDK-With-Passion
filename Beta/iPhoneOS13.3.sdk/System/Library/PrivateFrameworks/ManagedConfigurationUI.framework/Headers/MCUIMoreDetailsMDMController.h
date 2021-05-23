/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListController.h>

@class MCDetailsDescriptionTableCell;

__attribute__((visibility("hidden")))
@interface MCUIMoreDetailsMDMController : PSListController

{
    MCDetailsDescriptionTableCell *_descCell;
}

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)specifiers;

@end
