/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface AVSystemController : NSObject

{
    struct AVSystemControllerPrivate *_priv;
}

+ (void)initialize;
+ (id)sharedAVSystemController;
+ (id)compatibleAudioRouteForRoute:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)errorWithCode:(int)arg1 description:(id)arg2;
- (_Bool)hasRouteSharingPolicyLongFormVideo:(id)arg1;
- (_Bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)attributeForKey:(id)arg1;
- (_Bool)getVolume:(float *)arg1 forCategory:(id)arg2;
- (_Bool)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (_Bool)allowUserToExceedEUVolumeLimit;
- (_Bool)currentRouteHasVolumeControl;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (_Bool)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2;
- (_Bool)setActiveCategoryVolumeTo:(float)arg1;
- (id)pickableRoutesForCategory:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (_Bool)okToNotifyFromThisThread;
- (_Bool)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (_Bool)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float *)arg3 affectedCategory:(id *)arg4;
- (_Bool)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 fallbackCategory:(id)arg3;
- (_Bool)setVibeIntensityTo:(float)arg1;
- (_Bool)getVibeIntensity:(float *)arg1;
- (_Bool)changeActiveCategoryVolumeBy:(float)arg1;
- (_Bool)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (_Bool)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (_Bool)getActiveCategoryVolume:(float *)arg1 andName:(id *)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (_Bool)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (_Bool)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (_Bool)getVolumeForAccessory:(float *)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (_Bool)changeVolumeForRouteBy:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (_Bool)setVolumeForRouteTo:(float)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (_Bool)getVolumeForRoute:(float *)arg1 forCategory:(id)arg2 mode:(id)arg3 route:(id)arg4 deviceIdentifier:(id)arg5 andRouteSubtype:(id)arg6;
- (_Bool)toggleActiveCategoryMuted;
- (_Bool)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (_Bool)getActiveCategoryMuted:(_Bool *)arg1;
- (_Bool)getActiveCategoryMuted:(_Bool *)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (_Bool)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (_Bool)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(_Bool)arg2;
- (_Bool)didCancelRoutePicking:(id)arg1;
- (_Bool)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (id)routeForCategory:(id)arg1;
- (void)handleServerDied;
- (void)postFullMuteDidChangeNotification:(void *)arg1;
- (void)postEffectiveVolumeNotification:(void *)arg1;

@end
