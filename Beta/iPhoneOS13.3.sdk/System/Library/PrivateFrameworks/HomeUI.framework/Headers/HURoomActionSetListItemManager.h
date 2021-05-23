/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class NSArray;

@interface HURoomActionSetListItemManager : HFItemManager

{
    NSArray *_cachedSortedRooms;
}

@property (retain, nonatomic) NSArray *cachedSortedRooms;

- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)_willUpdateSections;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_currentSectionIdentifiers;
- (id)_sortedRooms;
- (CDUnknownBlockType)_roomComparator;
- (long long)sectionIndexForRoomIdentifier:(id)arg1;

@end
