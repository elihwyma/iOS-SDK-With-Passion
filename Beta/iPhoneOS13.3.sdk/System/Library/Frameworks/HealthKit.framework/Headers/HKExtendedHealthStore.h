/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString, _HKXPCConnection;

@protocol OS_dispatch_queue;

@interface HKExtendedHealthStore : NSObject

{
    _HKXPCConnection *_connection;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)daemonDidStart;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
