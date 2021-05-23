/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDHealthStoreClient, HDProfile, NSString, NSUUID;

@protocol HDTaskServerDelegate;

@interface HDStandardTaskServer : NSObject <Swift>

{
    NSUUID *_taskUUID;
    HDProfile *_profile;
    HDHealthStoreClient *_client;
    id <HDTaskServerDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSUUID *taskUUID;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (weak, nonatomic, readonly) id <HDTaskServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_unitTesting_createTaskServerNoOpWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
