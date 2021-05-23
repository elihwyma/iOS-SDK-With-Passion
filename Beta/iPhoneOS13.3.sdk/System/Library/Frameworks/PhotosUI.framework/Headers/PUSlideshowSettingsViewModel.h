/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class NSDictionary, OKProducerPreset, PUSlideshowMediaItem;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewModel : PUViewModel

{
    _Bool _shouldRepeat;
    _Bool _musicOn;
    double _stepDuration;
    OKProducerPreset *_preset;
    PUSlideshowMediaItem *_mediaItem;
}

@property (nonatomic, readonly) NSDictionary *propertyDictionary;
@property (retain, nonatomic) OKProducerPreset *preset;
@property (retain, nonatomic) PUSlideshowMediaItem *mediaItem;
@property (nonatomic) _Bool shouldRepeat;
@property (nonatomic) double stepDuration;
@property (nonatomic, getter=isMusicOn) _Bool musicOn;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyDictionary:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)newViewModelChange;
- (id)currentChange;

@end
