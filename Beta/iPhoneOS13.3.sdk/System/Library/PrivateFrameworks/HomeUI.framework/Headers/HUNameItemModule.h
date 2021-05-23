/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFItemBuilder, HFStaticItemProvider, HFTransformItem, NSSet;

@protocol HFNamingComponentCreating;

@interface HUNameItemModule : HFItemModule

{
    HFItem<HFNamingComponentCreating> *_sourceItem;
    HFItemBuilder *_sourceItemBuilder;
    HFTransformItem *_nameAndIconItem;
    NSSet *_items;
    HFStaticItemProvider *_itemProvider;
}

@property (retain, nonatomic) HFItem<HFNamingComponentCreating> *sourceItem;
@property (retain, nonatomic) HFItemBuilder *sourceItemBuilder;
@property (retain, nonatomic) HFTransformItem *nameAndIconItem;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) HFStaticItemProvider *itemProvider;

- (id)init;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 sourceServiceLikeItem:(id)arg2 itemBuilder:(id)arg3;

@end
