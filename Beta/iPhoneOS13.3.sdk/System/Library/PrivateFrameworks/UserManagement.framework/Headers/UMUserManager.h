/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UMUser, UMUserPersona;

@protocol UMUserListUpdateObserver, UMUserPersonaUpdateObserver;

@interface UMUserManager : NSObject

{
    NSArray *_allUsers;
    _Bool _switchIsOccurring;
    id <UMUserListUpdateObserver> _userListUpdateObserver;
    id <UMUserPersonaUpdateObserver> _userPersonaUpdateObserver;
}

@property (weak, nonatomic) id <UMUserListUpdateObserver> userListUpdateObserver;
@property (nonatomic) _Bool switchIsOccurring;
@property (weak, nonatomic) id <UMUserPersonaUpdateObserver> userPersonaUpdateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isMultiUser;
@property (copy, nonatomic, readonly) UMUser *currentUser;
@property (copy, nonatomic, readonly) UMUser *loginUser;
@property (nonatomic, readonly) _Bool isLoginSession;
@property (nonatomic, readonly) unsigned long long maxNumberOfUsers;
@property (copy, nonatomic, readonly) UMUserPersona *currentPersona;

+ (id)sharedManager;

- (id)init;
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)listAllPersonaWithAttributes;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPersonaWithType:(int)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
- (void)disableUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)userExists:(id)arg1;
- (id)allUsers;
- (id)currentUserSwitchContext;
- (void)currentUserSwitchContextHasBeenUsed;
- (void)userListDidUpdate;
- (void)_allUsersDidChange;
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeQuotas;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logoutToLoginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loginUICheckInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeSync;
- (void)userInteractionIsEnabled;
- (void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)haveValidPersonaContextForPersonaUniqueString:(id)arg1;
- (_Bool)canAccessUserProperties;
- (void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerUserListUpdateObserver:(id)arg1;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)haveValidPersonaContextForIDString:(id)arg1;
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id *)arg3;
- (_Bool)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id *)arg3;

@end
