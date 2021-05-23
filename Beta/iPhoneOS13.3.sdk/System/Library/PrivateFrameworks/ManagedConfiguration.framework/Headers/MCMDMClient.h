/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MCMDMClient : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_destroyXPCConnectionAndInvalidate:(_Bool)arg1;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (_Bool)isManagedByMDM;
- (void)simulatePushIfNetworkTetheredWithCompletion:(CDUnknownBlockType)arg1;
- (void)migrateMDMWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processDeviceRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)accessRights;
- (id)userEnrollmentAuthenticationDictWithEnrollmentID:(id)arg1;
- (id)deviceEnrollmentAuthenticationDict;
- (_Bool)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 useDevelopmentAPNS:(_Bool)arg4 signMessage:(_Bool)arg5 isUserEnrollment:(_Bool)arg6 enrollmentID:(id)arg7 outError:(id *)arg8;
- (_Bool)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 signMessage:(_Bool)arg4 isUserEnrollment:(_Bool)arg5 enrollmentID:(id)arg6 outError:(id *)arg7;
- (void)notifyNewConfiguration;
- (void)scheduleTokenUpdateIfNecessary;
- (void)retryNotNowResponse;
- (void)uprootMDM;
- (_Bool)isActivationLockAllowedWhileSupervised;
- (id)processDeviceRequest:(id)arg1 outError:(id *)arg2;

@end
