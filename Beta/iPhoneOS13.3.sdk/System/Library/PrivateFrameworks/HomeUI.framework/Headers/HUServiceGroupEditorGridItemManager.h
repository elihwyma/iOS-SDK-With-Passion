/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridItemManager.h>

@class HFServiceGroupBuilder, NSSet;

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager

{
    HFServiceGroupBuilder *_serviceGroupBuilder;
    NSSet *_prioritizedRooms;
}

@property (retain, nonatomic) NSSet *prioritizedRooms;
@property (nonatomic, readonly) HFServiceGroupBuilder *serviceGroupBuilder;

- (id)_itemsToHideInSet:(id)arg1;
- (_Bool)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_roomComparator;
- (id)initWithServiceGroupBuilder:(id)arg1 delegate:(id)arg2;

@end
