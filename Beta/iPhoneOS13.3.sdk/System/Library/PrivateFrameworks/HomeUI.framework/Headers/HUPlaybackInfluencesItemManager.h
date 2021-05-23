/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFAccessorySettingItem, HFStaticItem, NSArray;

@interface HUPlaybackInfluencesItemManager : HFItemManager

{
    NSArray *_playbackInfluencesOptionItems;
    HFStaticItem *_selectedItem;
    HFStaticItem *_useListeningHistoryItem;
}

@property (retain, nonatomic) HFStaticItem *useListeningHistoryItem;
@property (nonatomic, readonly) NSArray *playbackInfluencesOptionItems;
@property (nonatomic, readonly) HFAccessorySettingItem *settingItem;
@property (retain, nonatomic) HFStaticItem *selectedItem;

- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 settingItem:(id)arg2;
- (id)updateUseListeningHistorySetting:(_Bool)arg1;
- (id)playbackInfluencesSetting;
- (_Bool)playbackInfluencesFollowUser;

@end
