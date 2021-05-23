/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemModule.h>

@class HFCurrentZonesItem, HFItem, HFStaticItemProvider, HFZoneItemProvider, HFZoneSuggestionItemProvider, HMRoom, NSSet, NSString;

@interface HFZoneModule : HFItemModule

{
    _Bool _expanded;
    NSSet *_itemProviders;
    HMRoom *_room;
    HFCurrentZonesItem *_currentZoneItem;
    HFItem *_createNewZoneItem;
    HFStaticItemProvider *_expandedItemProvider;
    HFStaticItemProvider *_createNewZoneItemProvider;
    HFStaticItemProvider *_currentZoneItemProvider;
    HFZoneItemProvider *_zoneItemProvider;
    HFZoneSuggestionItemProvider *_zoneSuggestionItemProvider;
}

@property (retain, nonatomic) HFStaticItemProvider *expandedItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *createNewZoneItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *currentZoneItemProvider;
@property (retain, nonatomic) HFZoneItemProvider *zoneItemProvider;
@property (retain, nonatomic) HFZoneSuggestionItemProvider *zoneSuggestionItemProvider;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFItem *createNewZoneItem;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, readonly) HFCurrentZonesItem *currentZoneItem;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (_Bool)toggleExpansion;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (_Bool)canExpand;
- (void)_reloadItemProviders;
- (id)initWithItemUpdater:(id)arg1 room:(id)arg2;

@end
