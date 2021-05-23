/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFActionSetBuilder, HFMediaPlaybackActionBuilder, HFPlaybackArchive, HFStaticItem, HUMediaItem, NSArray, NSNumber, SKCloudServiceController;

@interface HUMediaSelectionItemManager : HFItemManager

{
    HFStaticItem *_selectedPlaybackStateItem;
    HFActionSetBuilder *_actionSetBuilder;
    HFStaticItem *_playbackStateAdjustVolumeOnlyItem;
    HFStaticItem *_playbackStatePauseItem;
    HFStaticItem *_playbackStateResumeItem;
    HFStaticItem *_playbackStatePlayItem;
    NSArray *_playbackStateItems;
    HFStaticItem *_mediaPickerItem;
    HUMediaItem *_chosenMediaItem;
    NSArray *_playbackOptionsItems;
    HFStaticItem *_useCurrentVolumeItem;
    HFStaticItem *_useCustomVolumeItem;
    HFStaticItem *_selectedVolumeItem;
    HFStaticItem *_volumeSliderItem;
    HFMediaPlaybackActionBuilder *_actionBuilder;
    NSArray *_mediaPickerRowItems;
    HFStaticItem *_repeatItem;
    HFStaticItem *_shuffleItem;
    NSArray *_customVolumeItems;
    NSArray *_volumeSliderItems;
    SKCloudServiceController *_cloudServiceController;
    HFPlaybackArchive *_lastSelectedArchive;
    NSNumber *_lastSelectedVolume;
}

@property (retain, nonatomic) HFMediaPlaybackActionBuilder *actionBuilder;
@property (retain, nonatomic) HFStaticItem *playbackStateAdjustVolumeOnlyItem;
@property (retain, nonatomic) HFStaticItem *playbackStatePauseItem;
@property (retain, nonatomic) HFStaticItem *playbackStateResumeItem;
@property (retain, nonatomic) HFStaticItem *playbackStatePlayItem;
@property (retain, nonatomic) NSArray *playbackStateItems;
@property (retain, nonatomic) HFStaticItem *mediaPickerItem;
@property (retain, nonatomic) HUMediaItem *chosenMediaItem;
@property (retain, nonatomic) NSArray *mediaPickerRowItems;
@property (retain, nonatomic) HFStaticItem *repeatItem;
@property (retain, nonatomic) HFStaticItem *shuffleItem;
@property (retain, nonatomic) NSArray *playbackOptionsItems;
@property (retain, nonatomic) HFStaticItem *useCurrentVolumeItem;
@property (retain, nonatomic) HFStaticItem *useCustomVolumeItem;
@property (retain, nonatomic) HFStaticItem *volumeSliderItem;
@property (retain, nonatomic) NSArray *customVolumeItems;
@property (retain, nonatomic) NSArray *volumeSliderItems;
@property (retain, nonatomic) SKCloudServiceController *cloudServiceController;
@property (retain, nonatomic) HFPlaybackArchive *lastSelectedArchive;
@property (retain, nonatomic) NSNumber *lastSelectedVolume;
@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder;
@property (retain, nonatomic) HFStaticItem *selectedPlaybackStateItem;
@property (retain, nonatomic) HFStaticItem *selectedVolumeItem;
@property (retain, nonatomic) HFPlaybackArchive *pickedPlaybackArchive;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithDelegate:(id)arg1 mediaPlaybackActionBuilder:(id)arg2;
- (void)mediaPlaybackOptionsItem:(id)arg1 switchedOn:(_Bool)arg2;
- (void)mediaVolumeValueChanged:(double)arg1;
- (id)_volumeForMediaAction;
- (id)selectedPlaybackStateItemBasedOnActionBuilderState;
- (id)selectedVolumeItemBasedOnActionBuilderState;
- (id)_defaultCurrentVolume;

@end
