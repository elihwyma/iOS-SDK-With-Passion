/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingVideoPlayerChange : PUViewModelChange

{
    _Bool _playStateDidChange;
    _Bool _desiredPlayStateDidChange;
    _Bool _isPlayingAllowedDidChange;
    _Bool _isActivatedDidChange;
    _Bool _isPlayerLoadingAllowedDidChange;
    _Bool _avPlayerDidChange;
    _Bool _playerItemDidChange;
    _Bool _errorDidChange;
    _Bool _isAtBeginningDidChange;
    _Bool _isAtEndDidChange;
    _Bool _isStalledDidChange;
    _Bool _alwaysRespectsMuteSwitchDidChange;
    _Bool _isPlayableDidChange;
    _Bool _isMutedDidChange;
    _Bool _audioStatusDidChange;
    _Bool _audioSessionVolumeIncreaseDidOccur;
}

@property (nonatomic, setter=_setPlayStateDidChange:) _Bool playStateDidChange;
@property (nonatomic, setter=_setDesiredPlayStateDidChange:) _Bool desiredPlayStateDidChange;
@property (nonatomic, setter=_setPlayingAllowedDidChange:) _Bool isPlayingAllowedDidChange;
@property (nonatomic, setter=_setActivatedDidChange:) _Bool isActivatedDidChange;
@property (nonatomic, setter=_setPlayerLoadingAllowedDidChange:) _Bool isPlayerLoadingAllowedDidChange;
@property (nonatomic, setter=_setAVPlayerDidChange:) _Bool avPlayerDidChange;
@property (nonatomic, setter=_setPlayerItemDidChange:) _Bool playerItemDidChange;
@property (nonatomic, setter=_setErrorDidChange:) _Bool errorDidChange;
@property (nonatomic, setter=_setAtBeginningDidChange:) _Bool isAtBeginningDidChange;
@property (nonatomic, setter=_setAtEndDidChange:) _Bool isAtEndDidChange;
@property (nonatomic, setter=_setStalledDidChange:) _Bool isStalledDidChange;
@property (nonatomic, setter=_setAlwaysRespectsMuteSwitchDidChange:) _Bool alwaysRespectsMuteSwitchDidChange;
@property (nonatomic, setter=_setPlayableDidChange:) _Bool isPlayableDidChange;
@property (nonatomic, setter=_setIsMutedDidChange:) _Bool isMutedDidChange;
@property (nonatomic, setter=_setAudioStatusDidChange:) _Bool audioStatusDidChange;
@property (nonatomic, setter=_setAudioSessionVolumeIncreaseDidOccur:) _Bool audioSessionVolumeIncreaseDidOccur;

- (_Bool)hasChanges;

@end
