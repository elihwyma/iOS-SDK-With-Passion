/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol CAMStorageControllerDelegate, OS_dispatch_queue;

@interface CAMStorageController : NSObject

{
    id <CAMStorageControllerDelegate> _delegate;
    long long __cachedVeryLowDiskThreshold;
    long long __cachedLowDiskThreshold;
    long long __cachedLegacyMGDiskThreshold;
    NSDate *__lastPurgeRequestUpdateTime;
    NSObject<OS_dispatch_queue> *__cacheDeleteQueryQueue;
    struct CacheDeleteToken *__queryQueue_currentToken;
}

@property (nonatomic) long long _cachedVeryLowDiskThreshold;
@property (nonatomic) long long _cachedLowDiskThreshold;
@property (nonatomic) long long _cachedLegacyMGDiskThreshold;
@property (retain, nonatomic) NSDate *_lastPurgeRequestUpdateTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue;
@property (nonatomic) struct CacheDeleteToken *_queryQueue_currentToken;
@property (weak, nonatomic) id <CAMStorageControllerDelegate> delegate;

- (id)init;
- (void)_notifyDelegate;
- (void)reportLowDiskEventWithIdentifier:(id)arg1;
- (_Bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(_Bool)arg2;
- (void)_loadFreeDiskThresholds;
- (void)_legacyDiskSpaceDidBecomeLowNotification;
- (long long)_totalFreeBytes;
- (long long)_absoluteMinimumBytesForMode:(long long)arg1;
- (void)_updatePurgeRequestStateForConfiguration:(id)arg1 totalFreeBytes:(long long)arg2;
- (void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)arg1;
- (id)_pathForStorageMountPoint;
- (void)_statMountPoint:(struct statfs *)arg1;
- (long long)_preferredMinimumBytesForVideoConfiguration:(long long)arg1 encodingBehavior:(long long)arg2;
- (long long)_preferredMinimumBytesForConfiguration:(id)arg1;
- (void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)arg1 preferredFreeBytes:(long long)arg2;

@end
