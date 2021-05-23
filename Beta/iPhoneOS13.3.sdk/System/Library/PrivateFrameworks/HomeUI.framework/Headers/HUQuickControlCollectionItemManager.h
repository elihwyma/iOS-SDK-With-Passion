/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFItemProvider, NSString;

@protocol NSCopying;

@interface HUQuickControlCollectionItemManager : HFItemManager

{
    HFItemProvider *_gridItemProvider;
    HFItem<NSCopying> *_supplementaryItem;
    CDUnknownBlockType _gridItemProviderCreator;
    CDUnknownBlockType _supplementaryItemProviderCreator;
    HFItemProvider *_supplementaryItemProvider;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType gridItemProviderCreator;
@property (copy, nonatomic, readonly) CDUnknownBlockType supplementaryItemProviderCreator;
@property (retain, nonatomic) HFItemProvider *gridItemProvider;
@property (retain, nonatomic) HFItemProvider *supplementaryItemProvider;
@property (copy, nonatomic, readonly) HFItem<NSCopying> *supplementaryItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(CDUnknownBlockType)arg2 supplementaryItemProviderCreator:(CDUnknownBlockType)arg3;
- (_Bool)isGridItem:(id)arg1;

@end
