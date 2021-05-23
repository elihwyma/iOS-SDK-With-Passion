/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICSharedPasswordUtilities : NSObject

{
    id _displayedSheet;
}

@property (retain, nonatomic) id displayedSheet;

+ (_Bool)isAuthenticatedForNote:(id)arg1;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(_Bool)arg2 removingOriginalNote:(_Bool)arg3;
+ (_Bool)isAuthenticatedForAccount:(id)arg1;
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(_Bool)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(struct UIWindow *)arg1;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (id)passwordCapableAccounts;
+ (void)resetTimeoutTimer;
+ (id)nonDeletedLockedNotesFromNotes:(id)arg1;
+ (long long)recentPasswordChangeCountAsReset:(_Bool)arg1;
+ (void)incrementRecentPasswordChangeCountAsReset:(_Bool)arg1;
+ (void)clearRecentPasswordChangeCountAsReset:(_Bool)arg1;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(struct UIWindow *)arg1;
+ (_Bool)accountPasswordExists;
+ (_Bool)hasSameCryptoKeyForNote:(id)arg1 andAccount:(id)arg2;
+ (_Bool)isPasswordSetForAccount:(id)arg1;
+ (_Bool)unlockedNotesOrKeysExist;
+ (void)lockAllNotes;
+ (_Bool)isAuthenticatedForDefaultAccount;
+ (_Bool)authenticateWithPassword:(id)arg1 forAccount:(id)arg2;
+ (_Bool)authenticateWithPassword:(id)arg1 forNote:(id)arg2;
+ (_Bool)isPassword:(id)arg1 correctForNote:(id)arg2;
+ (_Bool)isPassword:(id)arg1 correctForAccount:(id)arg2;
+ (id)accountWithPassword:(id)arg1;
+ (_Bool)hasAnyAccountWithPassword;
+ (_Bool)isDefaultAccountForPasswordNotesLocalAccount;
+ (_Bool)isDefaultAccountForPasswordNotesiCloudAccount;
+ (_Bool)setPassword:(id)arg1 hint:(id)arg2 forAccount:(id)arg3;
+ (_Bool)setPassword:(id)arg1 hint:(id)arg2 oldPassword:(id)arg3 forAccount:(id)arg4;
+ (_Bool)passwordCapableAccountExists;
+ (_Bool)hasMultiplePasswordCapableAccounts;
+ (id)preferredHintAccount;
+ (void)updateAllNotesWithOldPassword:(id)arg1 toAccountPassword:(id)arg2 fromAccount:(id)arg3;
+ (void)resetPasswordForAccount:(id)arg1;
+ (void)resetAllSharedPasswords;

- (id)init;
- (void)dealloc;
- (void)cryptorCachedKeysDidEmpty:(id)arg1;
- (void)_authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(struct UIWindow *)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_recursivelyAuthenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateForNote:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForNotes:(id)arg1 intent:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
