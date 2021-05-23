/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingIrisPlayerChange : PUViewModelChange

{
    _Bool _livePhotoPlaybackAllowedDidChange;
    _Bool _livePhotoLoadingAllowedDidChange;
    _Bool _livePhotoDidChange;
    _Bool _playerDidChange;
    _Bool _playbackStateDidChange;
    _Bool _hasPendingVitalityHintDidChange;
    _Bool _activatedDidChange;
    _Bool _scrubbingPhotoTimeDidChange;
    _Bool _currentlyDisplayedTimesDidChange;
    _Bool _playingDidChange;
    _Bool _isLivePhotoLoadingAllowedDidChange;
    _Bool _isLivePhotoPlaybackAllowedDidChange;
}

@property (nonatomic, setter=_setPlaybackStateDidChange:) _Bool playbackStateDidChange;
@property (nonatomic, setter=_setLivePhotoDidChange:) _Bool livePhotoDidChange;
@property (nonatomic, setter=_setLivePhotoLoadingAllowedDidChange:) _Bool isLivePhotoLoadingAllowedDidChange;
@property (nonatomic, setter=_setLivePhotoPlaybackAllowedDidChange:) _Bool isLivePhotoPlaybackAllowedDidChange;
@property (nonatomic, setter=_setHasPendingVitalityHintDidChange:) _Bool hasPendingVitalityHintDidChange;
@property (nonatomic, setter=_setPlayerDidChange:) _Bool playerDidChange;
@property (nonatomic, setter=_setActivatedDidChange:) _Bool activatedDidChange;
@property (nonatomic, setter=_setScrubbingPhotoTimeDidChange:) _Bool scrubbingPhotoTimeDidChange;
@property (nonatomic, setter=_setCurrentlyDisplayedTimesDidChange:) _Bool currentlyDisplayedTimesDidChange;
@property (nonatomic, setter=_setPlayingDidChange:) _Bool playingDidChange;
@property (nonatomic, readonly) _Bool livePhotoPlaybackAllowedDidChange;
@property (nonatomic, readonly) _Bool livePhotoLoadingAllowedDidChange;

- (_Bool)hasChanges;

@end
