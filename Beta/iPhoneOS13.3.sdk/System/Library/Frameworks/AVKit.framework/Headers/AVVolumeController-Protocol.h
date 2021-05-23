/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/Swift-Protocol.h>

@protocol AVVolumeController <Swift>

@property (nonatomic, readonly, getter=isChangingVolume) _Bool changingVolume;
@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) float effectiveVolumeLimit;
@property (nonatomic, readonly) _Bool currentRouteHasVolumeControl;

+ (unsigned short)volumeController;

- (unsigned short)setClientWithIdentifier:prefersSystemVolumeHUDHidden:forWindowSceneSessionWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)beginChangingVolumeForWindowSceneSessionID: /* Error: Ran out of types for this method. */;
- (unsigned short)endChangingVolume;
- (unsigned short)setTargetVolume: /* Error: Ran out of types for this method. */;

@end
