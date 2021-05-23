/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject

{
    _Bool _registerForDarkWake;
    _Bool _registrationsSuspended;
    APSConnection *_apsConnection;
    NSMutableArray *_registeredDelegates;
    NSMutableArray *_pendingPushes;
    NSString *_environmentName;
}

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSMutableArray *registeredDelegates;
@property (retain, nonatomic) NSMutableArray *pendingPushes;
@property (retain, nonatomic) NSString *environmentName;
@property (nonatomic) _Bool registrationsSuspended;
@property (nonatomic) _Bool registerForDarkWake;
@property (nonatomic, readonly) NSString *apsToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)constantForEnvironmentString:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1;
- (void)_setEnabledTopics:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2;
- (void)_registrationsWereResumed;
- (void)_handleMessage:(id)arg1 onTopic:(id)arg2;
- (void)suspendRegistrations;
- (void)resumeRegistrations;
- (void)registerDelegate:(id)arg1 forTopic:(id)arg2;
- (void)deregisterDelegate:(id)arg1;

@end
