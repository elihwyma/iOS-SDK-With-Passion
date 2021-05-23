/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, NSDictionary;

@interface ICAccountUtilities : NSObject

{
    _Bool _primaryICloudACAccountValid;
    ACAccount *_primaryICloudACAccount;
    ACAccountStore *_accountStore;
    NSDictionary *_currentICloudAccountState;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSDictionary *currentICloudAccountState;
@property (nonatomic, getter=isPrimaryICloudACAccountValid) _Bool primaryICloudACAccountValid;
@property (readonly) ACAccount *primaryICloudACAccount;
@property (nonatomic, readonly) _Bool primaryICloudAccountEnabled;
@property (nonatomic, readonly) _Bool didChooseToMigratePrimaryICloudAccount;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)initForObservingAccountStoreChanges:(_Bool)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (void)invalidatePrimaryICloudACAccount;
- (void)performBlockInPersonaContextIfNecessary:(CDUnknownBlockType)arg1 forAccountIdentifier:(id)arg2;
- (id)allICloudACAccounts;
- (id)applicationDocumentsURLForAccountIdentifier:(id)arg1;
- (id)iCloudACAccountWithIdentifier:(id)arg1;
- (id)temporaryDirectoryURLForAccountIdentifier:(id)arg1;
- (void)updateICloudACAccountFromStore;

@end
