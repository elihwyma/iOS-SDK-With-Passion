/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPAVController, MPAVItem, MPButton, NSMutableIndexSet, NSString;

@interface MPTransportControls : UIView

{
    id _target;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    NSMutableIndexSet *_heldParts;
    unsigned long long _visibleParts;
    unsigned int _playing:1;
    _Bool _allowsWirelessPlayback;
    _Bool _registeredForPlayerNotifications;
    MPButton *_alternatesButton;
    MPButton *_bookmarkButton;
    MPButton *_chaptersButton;
    MPButton *_emailButton;
    MPButton *_fastForward15SecondsButton;
    MPButton *_likeOrBanButton;
    MPButton *_nextButton;
    MPButton *_playButton;
    MPButton *_previousButton;
    MPButton *_rewind15SecondsButton;
    MPButton *_rewind30SecondsButton;
    MPButton *_scaleButton;
    MPButton *_toggleFullscreenButton;
    id _volumeSlider;
}

@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (retain, nonatomic) MPAVItem *item;
@property (retain, nonatomic) MPAVController *player;
@property (nonatomic) _Bool registeredForPlayerNotifications;
@property (weak, nonatomic) id target;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) _Bool allowsWirelessPlayback;
@property (nonatomic, readonly) NSString *playButtonImage;
@property (nonatomic, readonly) NSString *pauseButtonImage;
@property (nonatomic, readonly) NSString *playPauseButtonImage;

+ (long long)buttonType;
+ (_Bool)buttonImagesUseBackgroundImage;
+ (Class)buttonClass;
+ (unsigned long long)defaultVisibleParts;

- (id)init;
- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (id)buttonForPart:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setVisibleParts:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)_availableRoutesChangedNotification:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_timeMarkersAvailableNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (_Bool)allowsWirelessPlaybackForCurrentItem;
- (void)buttonDown:(id)arg1;
- (void)buttonHeld:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newVolumeSlider;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(_Bool)arg3;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (id)disabledButtonImageForPart:(unsigned long long)arg1;
- (id)highlightedButtonImageForPart:(unsigned long long)arg1;
- (_Bool)showsVolumeSliderWhenNoVolumeControlAvailable;
- (id)tintColorForPart:(unsigned long long)arg1;
- (_Bool)alwaysHidesSystemVolumeHUD;
- (_Bool)usesTintColorForControls;
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg1;
- (void)_applyDesiredPartsWithAnimation:(_Bool)arg1;
- (_Bool)_handleHoldForPart:(unsigned long long)arg1;
- (_Bool)_handleReleaseForPart:(unsigned long long)arg1;
- (_Bool)_handleTapForPart:(unsigned long long)arg1;
- (void)_reloadViewWithAnimation:(_Bool)arg1;
- (id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(unsigned long long)arg3;
- (void)_updatePlayButtonImage;
- (void)_updateTintColorForPart:(unsigned long long)arg1;
- (void)_updateEnabledStates:(_Bool)arg1;

@end
