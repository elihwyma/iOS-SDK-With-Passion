/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
 */

#import <DAAccount.h>

@interface DAAccount (DaemonAdditions)

- (Class)agentClass;
- (void)deviceWillSleep;
- (void)deviceDidWake;
- (id)rem_store;
- (id)rem_account;
- (id)rem_saveRequest;
- (id)rem_provideAccountInfo;
- (void)_debug_resetBabysitterWithRestrictedAccountID:(id)arg1;

@end
