/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSRestrictionsPINController.h>

@interface STLockoutRestrictionsPINController : PSRestrictionsPINController

+ (id)_xpcConnection;
+ (void)activateRemotePINUI;
+ (_Bool)isRestrictionsPasscodeSet;

- (id)stringsBundle;
- (id)stringsTable;

@end
