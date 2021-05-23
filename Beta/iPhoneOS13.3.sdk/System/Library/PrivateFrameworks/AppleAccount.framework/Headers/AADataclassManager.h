/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

@interface AADataclassManager : NSObject

{
    ACAccountStore *_store;
}

+ (id)sharedManager;
+ (id)appBundleIdentifierDictionary;

- (id)init;
- (id)whitelistedDataclassesForAppleAccountClassBasic;
- (id)whitelistedDataclassesForAppleAccountClassFull;
- (_Bool)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2;
- (_Bool)_isRestrictedForDataclass:(id)arg1;
- (id)appBundleIdentifierForDataclass:(id)arg1;
- (_Bool)_hideDataclassWhenAppRemoved:(id)arg1;
- (id)_userVisibleDataclasses;
- (id)_nonVisibleServiceDataclass;
- (_Bool)_isRunningInStoreDemoMode;
- (_Bool)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1;
- (id)_filteredDataclassesForAccountClass:(id)arg1;
- (_Bool)_shouldProvisionNotesForAccount:(id)arg1;
- (id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg1;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg1 fromAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)buildAutoEnableableDataclassesAndActionsForAccount:(id)arg1 dataclassesForEnablement:(id)arg2;
- (_Bool)isDataclassActionSafeForAutoEnablement:(id)arg1;
- (_Bool)canAutoEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (id)blackListedMacOSDataclasses;
- (id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
