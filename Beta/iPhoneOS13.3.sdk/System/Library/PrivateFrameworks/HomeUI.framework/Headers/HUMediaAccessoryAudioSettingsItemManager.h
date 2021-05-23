/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFMediaSystemBuilder;

@interface HUMediaAccessoryAudioSettingsItemManager : HFItemManager

{
    HFItem *_audioSettingsItem;
    HFMediaSystemBuilder *_mediaSystemBuilder;
}

@property (nonatomic, readonly) HFItem *audioSettingsItem;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;

- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithMediaSystemBuilder:(id)arg1 sourceItem:(id)arg2 delegate:(id)arg3;

@end
