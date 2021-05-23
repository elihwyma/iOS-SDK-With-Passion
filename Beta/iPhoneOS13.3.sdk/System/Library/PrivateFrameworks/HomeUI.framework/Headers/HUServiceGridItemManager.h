/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class NSArray;

@interface HUServiceGridItemManager : HFItemManager

{
    _Bool _shouldGroupByRoom;
    _Bool _shouldShowSectionHeaders;
    CDUnknownBlockType _itemProvidersCreator;
    NSArray *_cachedSortedRoomIdentifiers;
    NSArray *_cachedSortedRooms;
}

@property (copy, nonatomic) CDUnknownBlockType itemProvidersCreator;
@property (retain, nonatomic) NSArray *cachedSortedRoomIdentifiers;
@property (retain, nonatomic) NSArray *cachedSortedRooms;
@property (nonatomic) _Bool shouldGroupByRoom;
@property (nonatomic) _Bool shouldShowSectionHeaders;
@property (nonatomic, readonly) long long actionSetSectionIndex;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (void)_willUpdateSections;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (id)_sortedRooms;
- (CDUnknownBlockType)_roomComparator;
- (id)currentSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(_Bool)arg3 shouldShowSectionHeaders:(_Bool)arg4 itemProvidersCreator:(CDUnknownBlockType)arg5;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 shouldShowSectionHeaders:(_Bool)arg3 itemProvidersCreator:(CDUnknownBlockType)arg4;
- (id)_roomIdentifierForItem:(id)arg1;
- (id)_sortedRoomIdentifiers;

@end
