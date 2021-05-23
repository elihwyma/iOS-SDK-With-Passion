/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HKElectrocardiogramSessionConfiguration, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer

{
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    long long _sessionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)remote_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_abortWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_abortSensorSession;
- (void)_queue_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_abortWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_notifyClientDidEndWithEndReason:(long long)arg1 error:(id)arg2;
- (void)_queue_notifyClientDidDetectContactAtDate:(id)arg1;
- (void)_queue_notifyClientDidDetectEmergencyCallbackModeWithEndDate:(id)arg1;

@end
