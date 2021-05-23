/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class ACAccount, HMAccessory, HMFUnfairLock, HMRemoteLoginAnisetteDataProvider, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMRemoteLoginHandler : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    ACAccount *_loggedInAccount;
    NSString *_currentSessionID;
    NSUUID *_uniqueIdentifier;
    HMRemoteLoginAnisetteDataProvider *_anisetteDataProvider;
    _HMContext *_context;
    NSUUID *_uuid;
    HMAccessory *_accessory;
}

@property (retain, nonatomic) _HMContext *context;
@property (nonatomic, readonly) NSUUID *uuid;
@property (weak, nonatomic, readonly) HMAccessory *accessory;
@property (retain, nonatomic) NSString *currentSessionID;
@property (readonly, getter=isControllable) _Bool controllable;
@property (nonatomic, readonly) ACAccount *loggedInAccount;
@property (nonatomic, readonly, getter=isSessionInProgress) _Bool sessionInProgress;
@property (nonatomic, readonly) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateLoggedInAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)messageDestination;
- (void)registerForMessages;
- (void)_configureWithContext:(id)arg1;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
- (void)setLoggedInAccount:(id)arg1;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_signout:(CDUnknownBlockType)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)companionLoginWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryProxiedDevice:(CDUnknownBlockType)arg1;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signout:(CDUnknownBlockType)arg1;

@end
