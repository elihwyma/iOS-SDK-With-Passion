/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKCloudSyncObserverStatus, HKHealthStore, HKTaskServerProxyProvider, NSProgress, NSString, NSUUID;

@protocol HKCloudSyncObserverDelegate;

@interface HKCloudSyncObserver : NSObject

{
    NSUUID *_identifier;
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
    _Bool _observingSyncStatus;
    NSProgress *_progress;
    HKCloudSyncObserverStatus *_status;
    id <HKCloudSyncObserverDelegate> _delegate;
    struct os_unfair_lock_s _lock;
}

@property (weak, nonatomic) id <HKCloudSyncObserverDelegate> delegate;
@property (copy, nonatomic, readonly) HKCloudSyncObserverStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)progress;
- (id)exportedInterface;
- (void)setStatus:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)setObservingSyncStatus:(_Bool)arg1;
- (void)didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2;
- (_Bool)isObservingSyncStatus;
- (void)clientRemote_syncDidStart;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1;
- (id)initWithHealthStore:(id)arg1 delegate:(id)arg2;
- (void)startObservingSyncStatus;
- (void)startSyncIfRestoreNotCompleted;

@end
