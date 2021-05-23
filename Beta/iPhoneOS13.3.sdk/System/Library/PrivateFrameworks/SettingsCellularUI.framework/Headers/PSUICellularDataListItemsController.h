/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListItemsController.h>

@class RadiosPreferences;

__attribute__((visibility("hidden")))
@interface PSUICellularDataListItemsController : PSListItemsController

{
    RadiosPreferences *_radioPreferences;
}

@property (retain, nonatomic) RadiosPreferences *radioPreferences;

- (id)init;
- (void)dealloc;
- (void)airplaneModeChanged;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)reloadCache;

@end
