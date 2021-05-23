/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceGridItemManager.h>

@class HFMediaSystemBuilder, NSSet;

@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager

{
    HFMediaSystemBuilder *_mediaSystemBuilder;
    NSSet *_prioritizedRooms;
}

@property (retain, nonatomic) NSSet *prioritizedRooms;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;

+ (CDUnknownBlockType)defaultItemProviderCreatorForMediaSystemBuilder:(id)arg1 options:(unsigned long long)arg2;

- (id)_itemsToHideInSet:(id)arg1;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_roomComparator;
- (id)initWithMediaSystemBuilder:(id)arg1 delegate:(id)arg2;

@end
