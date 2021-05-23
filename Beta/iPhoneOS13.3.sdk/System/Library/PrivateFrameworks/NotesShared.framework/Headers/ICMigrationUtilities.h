/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICMigrationUtilities : NSObject

+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;
+ (void)saveDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 didMigrateOnMac:(_Bool)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)updateAllLegacyAccountMigrationStates;
+ (void)deleteMigratedHTMLAccounts;

@end
