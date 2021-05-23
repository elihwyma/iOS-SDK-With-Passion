/*
 Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol AccountFullAccountProtocol, AccountRefreshProtocol;

@interface BasicAccount : NSObject

{
    NSDictionary *_originalProperties;
    NSMutableDictionary *_properties;
    id <AccountFullAccountProtocol> _fullAccount;
    id <AccountRefreshProtocol> _syncAccount;
    BasicAccount *_parentAccount;
}

@property (retain, nonatomic) NSDictionary *originalProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)supportedDataclassesForAccountType:(id)arg1;
+ (id)accountWithProperties:(id)arg1;
+ (_Bool)isMultitaskingEnabled;
+ (_Bool)multipleStoresSupportedByDataclass:(id)arg1;
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1;
+ (_Bool)_isValidAccountType:(id)arg1;
+ (id)createNewAccountUID;
+ (id)accountWithType:(id)arg1 class:(id)arg2;
+ (id)allSupportedDataclasses;
+ (id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)deleteAccountActionsForAccountType:(id)arg1;
+ (_Bool)showRemindersSeparatelyForAccountType:(id)arg1;
+ (_Bool)displayToggleForDataclass:(id)arg1;
+ (_Bool)userConfirmationIsRequiredByDataclass:(id)arg1;
+ (id)_creatorsInfo;
+ (id)_dataclassesProperties;
+ (id)_accountCreationMap;

- (id)init;
- (void)dealloc;
- (id)type;
- (id)identifier;
- (id)displayName;
- (id)properties;
- (void)setDisplayName:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (id)parentAccount;
- (id)accountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)enabledDataclasses;
- (id)typeString;
- (void)setParentAccount:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (id)provisionedDataclasses;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (id)parentAccountIdentifier;
- (id)supportedDataclasses;
- (id)syncStoreIdentifier;
- (void)removeAccountPropertyForKey:(id)arg1;
- (id)accountClass;
- (id)_initWithType:(id)arg1 class:(id)arg2;
- (void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)_orderedDataclasses:(id)arg1;
- (id)_profileRestrictedDataclasses;
- (id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2;
- (void)setFullAccount:(id)arg1;
- (id)_cachedSyncAccount;
- (_Bool)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)refreshContainerListForDataclass:(id)arg1 isUserRequested:(_Bool)arg2;
- (_Bool)refreshContainersForDataclass:(id)arg1 isUserRequested:(_Bool)arg2;
- (void)renewAccountCredentialsWithHandler:(CDUnknownBlockType)arg1;
- (id)propertiesToSave;
- (void)setAccountClass:(id)arg1;
- (id)shortTypeString;
- (void)setEnabledForDataclasses:(id)arg1;
- (id)fullAccountUsingLoader:(id)arg1;
- (_Bool)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;
- (_Bool)refreshContainerListForDataclass:(id)arg1;
- (_Bool)refreshContainersForDataclass:(id)arg1;
- (id)syncAccountCreatorClassNameForAccountType:(id)arg1;
- (id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3;
- (void)_forcedSetEnabled:(_Bool)arg1 forDataclass:(id)arg2;

@end
