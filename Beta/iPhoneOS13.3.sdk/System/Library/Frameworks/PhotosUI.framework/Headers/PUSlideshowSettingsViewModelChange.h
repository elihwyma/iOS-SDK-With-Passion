/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewModelChange : PUViewModelChange

{
    _Bool _presetDidChange;
    _Bool _mediaItemDidChange;
    _Bool _shouldRepeatDidChange;
    _Bool _stepDurationDidChange;
    _Bool _musicOnDidChange;
}

@property (nonatomic, setter=_setPresetDidChange:) _Bool presetDidChange;
@property (nonatomic, setter=_setMediaItemDidChange:) _Bool mediaItemDidChange;
@property (nonatomic, setter=_setRepeatDidChange:) _Bool shouldRepeatDidChange;
@property (nonatomic, setter=_setStepDurationDidChange:) _Bool stepDurationDidChange;
@property (nonatomic, setter=_setMusicOnDidChange:) _Bool musicOnDidChange;

- (_Bool)hasChanges;

@end
