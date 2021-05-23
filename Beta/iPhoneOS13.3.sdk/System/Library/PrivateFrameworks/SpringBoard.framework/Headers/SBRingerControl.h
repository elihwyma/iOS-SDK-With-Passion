/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBHUDController, SBSoundController;

@interface SBRingerControl : NSObject

{
    _Bool _ringerMuted;
    float _volume;
    SBHUDController *_HUDController;
    SBSoundController *_soundController;
}

@property (nonatomic, readonly) SBHUDController *HUDController;
@property (nonatomic, readonly) SBSoundController *soundController;
@property (nonatomic) float volume;
@property (nonatomic, getter=isRingerMuted) _Bool ringerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)lastSavedRingerMutedState;
- (void)activateRingerHUDFromMuteSwitch:(int)arg1;
- (id)initWithHUDController:(id)arg1 soundController:(id)arg2;
- (void)buttonReleased;
- (void)nudgeUp:(_Bool)arg1;
- (void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)arg1;
- (void)setVolume:(float)arg1 forKeyPress:(_Bool)arg2;
- (void)_softMuteChanged:(id)arg1;
- (void)activateRingerHUD:(int)arg1 withInitialVolume:(float)arg2 fromSource:(unsigned long long)arg3;
- (id)existingRingerHUDViewController;
- (void)hideRingerHUDIfVisible;
- (void)ringerHUDViewControllerWantsToBeDismissed:(id)arg1;
- (void)toggleRingerMute;

@end
