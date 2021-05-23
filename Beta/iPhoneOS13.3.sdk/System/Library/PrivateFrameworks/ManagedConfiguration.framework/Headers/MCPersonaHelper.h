/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCPersonaHelper : NSObject

+ (id)performBlockUnderPersonalPersona:(CDUnknownBlockType)arg1;
+ (id)managedAppleIDNameWithPersonaID:(id)arg1;
+ (void)removePersona:(id)arg1;
+ (void)removePersonaAndAccountsWithPersonaID:(id)arg1;
+ (void)signOutEnterpriseAccountWithPersonaID:(id)arg1;
+ (id)appleAccountWithPersonaID:(id)arg1;
+ (id)performBlockUnderPersona:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)createEnterprisePersona:(id *)arg1 passcode:(id)arg2;
+ (_Bool)adoptPersona:(id)arg1 error:(id *)arg2;
+ (void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)arg1;
+ (id)updateAccountDescriptionName:(id)arg1 forAppleAccountWithPersonaID:(id)arg2;
+ (id)currentPersonaID;
+ (_Bool)isCurrentPersonaEnterprise;
+ (_Bool)personaWithUniqueIdentifierExists:(id)arg1;
+ (void)trackDirtyPersona:(id)arg1;
+ (void)untrackDirtyPersona:(id)arg1;
+ (void)untrackAllDirtyPersonas;
+ (id)fetchDirtyPersonaIDs;

@end
