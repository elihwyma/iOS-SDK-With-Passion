/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSLock, NSMutableArray, NSString, NSUUID, _HKCurrentWorkoutSnapshot;

@protocol _HKWorkoutObserverDelegate;

@interface _HKWorkoutObserver : NSObject

{
    NSLock *_lock;
    _HKCurrentWorkoutSnapshot *_latestSnapshot;
    _Bool _receivedInitialSnapshot;
    id <_HKWorkoutObserverDelegate> _delegate;
    NSMutableArray *_pendingHandlers;
    int _notifyToken;
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_identifier;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) NSUUID *identifier;
@property (weak, nonatomic) id <_HKWorkoutObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (void)dealloc;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)currentWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startTaskServerIfNeeded;
- (void)clientRemote_didUpdateWorkoutSnapshot:(id)arg1;
- (void)_lock_startTaskServerIfNeeded;
- (void)waitForAutomaticWorkoutRecoveryWithCompletion:(CDUnknownBlockType)arg1;

@end
