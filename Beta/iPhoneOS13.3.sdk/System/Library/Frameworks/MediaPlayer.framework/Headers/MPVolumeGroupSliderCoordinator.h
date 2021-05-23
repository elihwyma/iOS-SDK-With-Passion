/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPVolumeSlider, NSArray, NSMapTable, NSMutableSet;

@interface MPVolumeGroupSliderCoordinator : NSObject

{
    NSArray *_allSliders;
    NSMutableSet *_individualVolumeSliders;
    MPVolumeSlider *_trackingSlider;
    NSMapTable *_optimisticValues;
    NSMapTable *_optimisticScales;
    int _inFlightDisableOptimisticStateRequests;
    _Bool _shouldOverrideTracking;
    _Bool _synced;
    MPVolumeSlider *_masterVolumeSlider;
}

@property (nonatomic, readonly) MPVolumeSlider *masterVolumeSlider;
@property (copy, nonatomic, readonly) NSArray *individualVolumeSliders;
@property (nonatomic, readonly) _Bool synced;

- (id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2;
- (void)addIndividualVolumeSlider:(id)arg1;
- (void)removeIndividualVolumeSlider:(id)arg1;
- (void)removeAllIndividualVolumeSliders;
- (void)volumeSliderValueChanged:(id)arg1;
- (void)volumeSliderDidEndTracking:(id)arg1;
- (float)_maxOptimisticValue;
- (void)_resetOptimisticScales;
- (void)_updateOptimisticValueCache;
- (void)_resetMasterVolumeSlider;
- (void)syncSliders:(_Bool)arg1;
- (id)_findExistingVolumeSlider:(id)arg1;
- (void)_addControlEventsForVolumeSlider:(id)arg1;
- (void)_addControlEventsForVolumeSliders:(id)arg1;
- (void)_removeControlEventsForVolumeSlider:(id)arg1;
- (void)_removeControlEventsForVolumeSliders:(id)arg1;
- (void)_setControlEventsForVolumeSlider:(id)arg1 add:(_Bool)arg2;

@end
