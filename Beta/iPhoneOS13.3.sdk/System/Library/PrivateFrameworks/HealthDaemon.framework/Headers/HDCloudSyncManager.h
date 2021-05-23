/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertion, HDProfile, NSString;

@protocol OS_dispatch_queue;

@interface HDCloudSyncManager : NSObject

{
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    _Bool _supportsRebase;
    _Bool _shouldResync;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _inProgressSyncCount;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool shouldResync;
@property (nonatomic) long long inProgressSyncCount;
@property (retain) HDAssertion *preparedDatabaseAccessibilityAssertion;
@property (readonly) long long bytesPerChangeRecordAssetThreshold;
@property (readonly) long long bytesPerChangeRecordAssetThresholdHardLimit;
@property (nonatomic, readonly) _Bool supportsRebase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_containerIdentifiersWithEncryptionSupportEnabled:(_Bool)arg1 accountManateeEnabled:(_Bool)arg2 internalSettingManateeEnabled:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)lastPushForwardProgressDate;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1;
- (void)disableSyncLocallyWithTaskTree:(id)arg1;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3;
- (id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)prepareForSync;
- (void)requestImmediateResync;
- (void)_queue_updateAccessibilityAssertion;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 permitResync:(_Bool)arg4;
- (void)queue_cloudSyncRepositoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2;
- (id)_containerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)_containerIdentifiersForCurrentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_primaryContainerIdentifiersForCurrentAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_considerStartingBackstopSyncForThreshold:(double)arg1;
- (id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)syncSessionForSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 accessibilityAssertion:(id)arg4 excludedStores:(id)arg5;
- (void)fetchCloudKitEmailAddressWithCompletion:(CDUnknownBlockType)arg1;
- (void)unitTest_setSupportsRebase:(_Bool)arg1;

@end
