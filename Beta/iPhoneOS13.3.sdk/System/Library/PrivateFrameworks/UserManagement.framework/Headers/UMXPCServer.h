/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

__attribute__((visibility("hidden")))
@interface UMXPCServer : NSObject

{
    _Bool _currentlyBroadcastingWillSwitchToUser;
    _Bool _didRegisterStakeholder;
    _Bool _didBroadcastWillSwitchToUser;
    _Bool _didSendTasks;
    _Bool _didBroadcastUploadContent;
    _Bool _didRegisterPersonaCalbackStakeholder;
    unsigned int _interruptionRetryCount;
    id _stakeholder;
    unsigned long long _stakeholderType;
    NSString *_machServiceName;
    unsigned long long _unregistrationStatus;
    NSString *_unregistrationReason;
    NSDictionary *_personaSpec;
    NSData *_passcodeData;
    NSData *_contextData;
    NSDictionary *_preferencesDict;
    NSDictionary *_personaProfileDict;
    CDUnknownBlockType _registrationCompletionHandler;
    CDUnknownBlockType _switchCompletionHandler;
    CDUnknownBlockType _suspendQuotasCompletionHandler;
    CDUnknownBlockType _directSwitchCompletionHandler;
    CDUnknownBlockType _logoutToLoginSessionCompletionHandler;
    CDUnknownBlockType _loginUICheckinSessionCompletionHandler;
    CDUnknownBlockType _uploadContentCompletionHandler;
    CDUnknownBlockType _willSwitchCompletionHandler;
    NSMutableArray *_switchBlockingTasks;
    NSMutableArray *_syncTasks;
    CDUnknownBlockType _bubblePopHandler;
    unsigned long long _willSwitchToUserAddedTaskCount;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
    id _personaStakeholder;
    CDUnknownBlockType _personaRegistrationCompletionHandler;
    id _personaUpdateCallbackStakeholder;
}

@property (weak, nonatomic) id stakeholder;
@property (nonatomic) unsigned long long stakeholderType;
@property (retain, nonatomic) NSString *machServiceName;
@property (nonatomic) unsigned long long unregistrationStatus;
@property (retain, nonatomic) NSString *unregistrationReason;
@property (retain, nonatomic) NSDictionary *personaSpec;
@property (retain, nonatomic) NSData *passcodeData;
@property (retain, nonatomic) NSData *contextData;
@property (retain, nonatomic) NSDictionary *preferencesDict;
@property (retain, nonatomic) NSDictionary *personaProfileDict;
@property (copy, nonatomic) CDUnknownBlockType registrationCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType switchCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType suspendQuotasCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType directSwitchCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType logoutToLoginSessionCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType loginUICheckinSessionCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType uploadContentCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType willSwitchCompletionHandler;
@property (retain, nonatomic) NSMutableArray *switchBlockingTasks;
@property (retain, nonatomic) NSMutableArray *syncTasks;
@property (copy, nonatomic) CDUnknownBlockType bubblePopHandler;
@property (nonatomic) _Bool currentlyBroadcastingWillSwitchToUser;
@property (nonatomic) unsigned long long willSwitchToUserAddedTaskCount;
@property (nonatomic) _Bool didRegisterStakeholder;
@property (nonatomic) _Bool didBroadcastWillSwitchToUser;
@property (nonatomic) _Bool didSendTasks;
@property (nonatomic) _Bool didBroadcastUploadContent;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (nonatomic) unsigned int interruptionRetryCount;
@property (weak, nonatomic) id personaStakeholder;
@property (copy, nonatomic) CDUnknownBlockType personaRegistrationCompletionHandler;
@property (weak, nonatomic) id personaUpdateCallbackStakeholder;
@property (nonatomic) _Bool didRegisterPersonaCalbackStakeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)_pid;
- (id)_server;
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
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
- (void)deleteUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableUserPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchListOfPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchListOfAllUsersPersonasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAsidMapwithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersona:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchBundleIdentifierForPersona:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchListOfPersonasSynchronousWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPersonaSynchronous:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setUpXPCConnectionToUMServerIfNeeded;
- (void)_registerStakeholder:(id)arg1;
- (void)_abortIfWeDoNotHaveAStakeholder;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1;
- (void)_abortIfWeDoNotHaveASyncStakeholder;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2;
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userSwitchTaskListDidUpdate;
- (void)deviceLoginSessionStateDidUpdate;
- (void)bubbleDidPop;
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resendXPCMessages;
- (void)_tearDownConnectionToUMServer;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (void)_broadcastWillSwitchToUser:(id)arg1;
- (void)_broadcastReadyToSwitchToUser:(id)arg1;
- (void)_broadcastReadyToSwitchToLoginSession:(id)arg1;
- (void)_broadcastpersonaListDidUpdate;
- (id)_syncServer;
- (void)launchPersonaCallback;
- (id)registerPersonaUpdateCallbackWithMachService:(id)arg1;
- (id)_registerPersonaListObserver:(id)arg1 withMachService:(id)arg2;
- (void)addTask:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
