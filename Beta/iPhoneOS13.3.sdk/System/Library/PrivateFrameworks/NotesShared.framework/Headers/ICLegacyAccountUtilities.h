/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICLegacyAccountUtilities : NSObject

+ (struct NoteAccountObject *)legacyAccountForLegacyAccountType:(long long)arg1 context:(struct NoteContext *)arg2;
+ (_Bool)didChooseToMigrateLegacyAccountType:(long long)arg1;
+ (_Bool)didChooseToMigrateAccountsForContext:(struct NoteContext *)arg1 forAccountPassingTest:(CDUnknownBlockType)arg2;
+ (struct NoteAccountObject *)legacyAccountForPrimaryICloudAccountWithContext:(struct NoteContext *)arg1;
+ (struct NoteAccountObject *)legacyAccountForLocalAccountWithContext:(struct NoteContext *)arg1;
+ (struct NoteAccountObject *)accountForAccountIdentifier:(id)arg1 context:(struct NoteContext *)arg2;
+ (_Bool)didChooseToMigrateAccount:(struct NoteAccountObject *)arg1 context:(struct NoteContext *)arg2;
+ (_Bool)isLegacyLocalAccount:(struct NoteAccountObject *)arg1;
+ (id)accountIdentifierForAccount:(struct NoteAccountObject *)arg1;

@end
