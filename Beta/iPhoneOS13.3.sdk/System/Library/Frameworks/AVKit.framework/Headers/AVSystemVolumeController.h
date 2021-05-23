/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVSystemController, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVSystemVolumeController : NSObject

{
    _Bool _changingVolume;
    _Bool _currentRouteHasVolumeControl;
    _Bool _EUVolumeLimitEnabled;
    _Bool _EUVolumeLimitOverridden;
    _Bool _volumeChangesThrottled;
    _Bool _canOverrideEUVolumeLimit;
    _Bool _fullyInitialized;
    float _EUVolumeLimit;
    float _volume;
    NSNumber *_targetVolumeInternal;
    NSNumber *_maximumTargetVolumeSinceChangingVolumeBegan;
    NSString *_volumeCategory;
    AVSystemController *_sharedSystemController;
}

@property (nonatomic, getter=isChangingVolume) _Bool changingVolume;
@property (nonatomic) _Bool currentRouteHasVolumeControl;
@property (nonatomic) float EUVolumeLimit;
@property (nonatomic, getter=isEUVolumeLimitEnabled) _Bool EUVolumeLimitEnabled;
@property (nonatomic, getter=isEUVolumeLimitOverridden) _Bool EUVolumeLimitOverridden;
@property (nonatomic) float volume;
@property (nonatomic) _Bool volumeChangesThrottled;
@property (nonatomic) _Bool canOverrideEUVolumeLimit;
@property (retain, nonatomic) NSNumber *targetVolumeInternal;
@property (retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan;
@property (nonatomic, readonly) NSString *volumeCategory;
@property (retain, nonatomic) AVSystemController *sharedSystemController;
@property (nonatomic, getter=isFullyInitialized) _Bool fullyInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) float effectiveVolumeLimit;

+ (id)volumeController;
+ (id)windowSceneVolumeHUDAssertions;

- (id)init;
- (void)dealloc;
- (void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(_Bool)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
- (void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
- (void)endChangingVolume;
- (void)setTargetVolume:(float)arg1;
- (void)_removeVolumeHUDAssertionsForClientID:(id)arg1;
- (id)_windowSceneIdentifiersWithVolumeHUDAssertions;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forWindowSceneSessionIdentifier:(id)arg2;
- (void)_postNotificationForNameIfFullyInitialized:(id)arg1 userInfo:(id)arg2;
- (void)_observeSystemController;
- (void)_unobserveSystemController;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_handleEUVolumeLimitDidChangeNotification:(id)arg1;
- (void)_handleSystemVolumeDidChangeNotification:(id)arg1;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1;
- (void)_applyProposedVolumeIfNeeded;
- (void)_applyProposedVolumeImmediately;
- (void)_performOnMainThread:(CDUnknownBlockType)arg1;

@end
