/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Accounts/ACAccount.h>

@interface ACAccount (REM)

- (_Bool)rem_didChooseToMigrate;
- (_Bool)rem_didFinishMigration;
- (_Bool)rem_isManagedAppleID;
- (_Bool)rem_isRemindersMigrated;
- (_Bool)rem_isPrimaryAppleAccount;

@end
