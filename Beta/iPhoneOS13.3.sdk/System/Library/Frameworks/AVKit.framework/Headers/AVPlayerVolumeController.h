/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVObservationController, AVPlayerController, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerVolumeController : NSObject

{
    _Bool _changingVolume;
    AVPlayerController *_playerController;
    AVObservationController *_keyValueObservationController;
}

@property (nonatomic, getter=isChangingVolume) _Bool changingVolume;
@property (retain, nonatomic) AVObservationController *keyValueObservationController;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) float effectiveVolumeLimit;
@property (nonatomic, readonly) _Bool currentRouteHasVolumeControl;

+ (id)volumeController;

- (id)init;
- (void)dealloc;
- (void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(_Bool)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
- (void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
- (void)endChangingVolume;
- (void)setTargetVolume:(float)arg1;

@end
