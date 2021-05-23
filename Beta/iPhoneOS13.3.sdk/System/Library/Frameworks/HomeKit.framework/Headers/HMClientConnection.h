/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFMessageDispatcher, HMXPCClient, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMXPCClient *_xpcClient;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMXPCClient *xpcClient;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)sharedInstance;
+ (_Bool)areHomesConfigured;
+ (id)siriHomeIdentifier;
+ (_Bool)areAnyAccessoriesConfigured;
+ (_Bool)areAnySpeakersConfigured;
+ (_Bool)areAnyTelevisionAccessoriesConfigured;

- (id)init;
- (void)dealloc;
- (void)_registerToDaemon;
- (void)_start;
- (id)initWithNoValidation;
- (void)_reportResultsTohandler:(CDUnknownBlockType)arg1;
- (void)_reportIntentResultTohandler:(CDUnknownBlockType)arg1;
- (void)sendSiriCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendIntentRequestCommand:(id)arg1 withPayload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestSiriSyncDataWithValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
