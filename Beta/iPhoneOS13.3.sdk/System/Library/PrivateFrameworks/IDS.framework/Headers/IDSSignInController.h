/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSCTAdapter, NSMapTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, _IDSPasswordManager;

@interface IDSSignInController : NSObject

{
    NSMutableDictionary *_serviceNameAccountControllerMap;
    NSMutableDictionary *_accountIDDescriptionMap;
    NSMapTable *_delegateByServiceType;
    NSMutableDictionary *_initialStateByService;
    NSObject<OS_dispatch_queue> *_signInQueue;
    id _passwordManager;
    double _signInTimeout;
    double _signInFuzz;
    IDSCTAdapter *_CTAdapter;
}

@property (retain, nonatomic) NSMutableDictionary *serviceNameAccountControllerMap;
@property (retain, nonatomic) NSMutableDictionary *accountIDDescriptionMap;
@property (retain, nonatomic) NSMapTable *delegateByServiceType;
@property (retain, nonatomic) NSMutableDictionary *initialStateByService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue;
@property (retain, nonatomic) id <_IDSPasswordManager> passwordManager;
@property (retain, nonatomic) IDSCTAdapter *CTAdapter;
@property (nonatomic) double signInTimeout;
@property (nonatomic) double signInFuzz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (_Bool)isiMessageEnabled;
- (void)refreshRegistrationForAccount:(id)arg1;
- (id)initWithPasswordManager:(id)arg1 CTAdapter:(id)arg2 signInTimeout:(double)arg3 signInFuzz:(double)arg4 queue:(id)arg5;
- (id)_statusOfUsersOnService:(unsigned long long)arg1;
- (id)_serviceNameForType:(unsigned long long)arg1;
- (id)_accountControllerForName:(id)arg1;
- (void)_initializeStateMachineForAccountID:(id)arg1 service:(id)arg2 state:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_actionOnAccountOfType:(unsigned long long)arg1 onService:(unsigned long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)_statusOfAccount:(id)arg1;
- (void)_cleanupStateForAccountID:(id)arg1;
- (id)_createAccountWithDictionary:(id)arg1 accountID:(id)arg2 serviceName:(id)arg3;
- (void)signInUsername:(id)arg1 onService:(unsigned long long)arg2 waitUntilRegistered:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)provideCredential:(id)arg1 forUser:(id)arg2 onService:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_scheduleValidationAfter:(double)arg1 forAccountID:(id)arg2 allowFuzz:(_Bool)arg3;
- (void)_validateStateForAccountID:(id)arg1 timeoutMode:(unsigned long long)arg2;
- (unsigned long long)_serviceTypeForName:(id)arg1;
- (id)_accountWithUniqueID:(id)arg1;
- (id)_createAccountControllerForService:(id)arg1;
- (void)_validateDelegateState;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)setDelegate:(id)arg1 forService:(unsigned long long)arg2;
- (void)removeDelegateForService:(unsigned long long)arg1;
- (void)enableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusOfUsersOnService:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)signInUsername:(id)arg1 withProvidedCredential:(id)arg2 onService:(unsigned long long)arg3 waitUntilRegistered:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)signOutService:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isServiceCurrentlyEnabled:(id)arg1;
- (_Bool)isFaceTimeEnabled;

@end
