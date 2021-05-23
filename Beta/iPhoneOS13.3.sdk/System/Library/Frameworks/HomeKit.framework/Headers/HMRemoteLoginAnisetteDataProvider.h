/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMDelegateCaller, HMFMessageDispatcher, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HMRemoteLoginAnisetteDataProvider : NSObject <Swift>

{
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_msgDispatcher;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMDelegateCaller *delegateCaller;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;

@end
