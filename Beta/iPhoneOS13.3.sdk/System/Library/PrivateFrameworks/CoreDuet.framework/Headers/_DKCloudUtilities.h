/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKThrottledActivity;

@protocol OS_dispatch_queue;

@interface _DKCloudUtilities : NSObject

{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _DKThrottledActivity *_activityThrottler;
    _Bool _supportsDeviceToDeviceEncryption;
    _Bool _isSingleDevice;
}

@property (nonatomic, readonly) _Bool isSingleDevice;
@property (nonatomic, readonly) _Bool isCloudSyncAvailable;
@property (nonatomic, readonly) _Bool isSiriCloudSyncEnabled;
@property (nonatomic, readonly) _Bool supportsDeviceToDeviceEncryption;

+ (id)sharedInstance;
+ (_Bool)isUnitTesting;
+ (_Bool)isCloudKitEnabled;
+ (_Bool)isSyncAvailableAndEnabled;
+ (_Bool)isSyncAvailableAndEnabledWithVerboseLogging:(_Bool)arg1;
+ (id)containerIdentifier;
+ (void)setCloudKitEnabled:(_Bool)arg1;
+ (void)setUnitTesting:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)keyValueStore;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (void)_accountDidChange:(id)arg1;
- (void)_fetchCloudKitConfigurationAndStatus;
- (void)_updateNumberOfSyncedDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateAccountInfo:(id)arg1 error:(id)arg2;
- (void)_performUpdateNumberOfSyncedDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performUpdateNumberOfSyncedDevicesWithAttempt:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)containerKeyValueStore;
- (void)setCloudSyncAvailable:(_Bool)arg1;

@end
