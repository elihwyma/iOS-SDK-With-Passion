/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKHealthStore, HKSeriesBuilderConfiguration, HKTaskServerProxyProvider, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HKSeriesBuilder : NSObject <Swift>

{
    _Atomic int _state;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_identifier;
    HKSeriesBuilderConfiguration *_configuration;
    HKHealthStore *_store;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) HKSeriesBuilderConfiguration *configuration;
@property (nonatomic, readonly) HKHealthStore *store;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (void)configureClientInterface:(id)arg1;
+ (id)taskServerIdentifier;
+ (void)configureServerInterface:(id)arg1;

- (id)init;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)freezeBuilderWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3;
- (void)discard;
- (void)_resourceQueue_discardWithHandler:(CDUnknownBlockType)arg1;
- (void)clientRemote_didChangeToState:(long long)arg1;

@end
