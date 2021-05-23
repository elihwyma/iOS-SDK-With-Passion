/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFAccessoryControlItem, HFItem, HFItemProvider, HFServiceItemProvider, NSMapTable, NSSet, NSString;

@protocol HFServiceLikeItem;

@interface HUQuickControlGridCollectionItemManager : HFItemManager

{
    HFItemProvider *_supplementaryItemProvider;
    HFItemProvider *_overflowItemProvider;
    HFAccessoryControlItem *_accessoryControlItem;
    HFItem<HFServiceLikeItem> *_sourceServiceLikeItem;
    NSSet *_controlItems;
    HFServiceItemProvider *_serviceItemProvider;
    HFItemProvider *_controlItemProvider;
    NSMapTable *_controlItemToViewControllerTable;
}

@property (copy, nonatomic) HFAccessoryControlItem *accessoryControlItem;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceLikeItem;
@property (retain, nonatomic) NSSet *controlItems;
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider;
@property (retain, nonatomic) HFItemProvider *controlItemProvider;
@property (retain, nonatomic) NSMapTable *controlItemToViewControllerTable;
@property (nonatomic, readonly) HFItemProvider *supplementaryItemProvider;
@property (nonatomic, readonly) HFItemProvider *overflowItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDUnknownBlockType)serviceItemComparator;
+ (unsigned long long)specialCaseSectionSortingForControlItem:(id)arg1 viewController:(id)arg2 fromControlItems:(id)arg3 primaryServiceType:(id)arg4;
+ (unsigned long long)preferredControlForControlItem:(id)arg1 allControlItems:(id)arg2 isSupplementary:(_Bool)arg3;
+ (_Bool)isPrimaryOrBinaryStateControlItem:(id)arg1;

- (id)configuration;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)sourceItem;
- (id)viewControllerForItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 controlItems:(id)arg2;
- (id)_generateViewControllersForControlItems:(id)arg1;
- (_Bool)_catchAllLayoutForGridViewProfiles:(id)arg1 supplementaryViewProfiles:(id)arg2;
- (id)_composeIdentifierForService:(id)arg1 section:(unsigned long long)arg2;
- (id)titleForItem:(id)arg1;
- (id)gridItemProvider;

@end
