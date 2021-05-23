/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFActionSetItemProvider, HFReorderableHomeKitItemList, HMRoom;

@interface HUGridActionSetItemManager : HFItemManager

{
    _Bool _onlyShowsFavorites;
    HMRoom *_room;
    unsigned long long _actionSetStyle;
    HFActionSetItemProvider *_actionSetItemProvider;
    HFReorderableHomeKitItemList *_clientReorderableActionSetList;
}

@property (retain, nonatomic) HFActionSetItemProvider *actionSetItemProvider;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableActionSetList;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) _Bool onlyShowsFavorites;
@property (nonatomic, readonly) unsigned long long actionSetStyle;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableActionSetList;

- (id)initWithDelegate:(id)arg1;
- (void)_updateFilters;
- (id)_buildItemProvidersForHome:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemForSorting;
- (id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned long long)arg2 room:(id)arg3;
- (id)actionSetItemAssociatedWithActionSet:(id)arg1;

@end
