/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKElectrocardiogramSessionConfiguration, HKHealthStore, HKTaskServerProxyProvider, NSString;

@protocol HKElectrocardiogramSessionDelegate;

@interface HKElectrocardiogramSession : NSObject

{
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
    id <HKElectrocardiogramSessionDelegate> _delegate;
}

@property (copy, nonatomic, readonly) HKElectrocardiogramSessionConfiguration *sessionConfiguration;
@property (weak, nonatomic) id <HKElectrocardiogramSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (_Bool)isElectrocardiogramSessionAvailable;

- (id)init;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_successCompletionBlockOnClientQueue:(CDUnknownBlockType)arg1;
- (void)clientRemote_didDetectContactAtDate:(id)arg1;
- (void)clientRemote_didEndWithReason:(long long)arg1 error:(id)arg2;
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(id)arg1;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2;
- (void)abortWithCompletion:(CDUnknownBlockType)arg1;

@end
