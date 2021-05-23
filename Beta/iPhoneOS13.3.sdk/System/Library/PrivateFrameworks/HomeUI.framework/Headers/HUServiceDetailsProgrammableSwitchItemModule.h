/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceDetailsItemModule.h>

@class HFItem, HUCharacteristicEventOptionProvider, NSSet;

@protocol HFServiceLikeItem;

@interface HUServiceDetailsProgrammableSwitchItemModule : HUServiceDetailsItemModule

{
    HUCharacteristicEventOptionProvider *_programmableSwitchOptionsProvider;
    NSSet *_itemProviders;
}

@property (copy, nonatomic) NSSet *itemProviders;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *sourceItem;
@property (nonatomic, readonly) HUCharacteristicEventOptionProvider *programmableSwitchOptionsProvider;

- (id)buildSectionsWithDisplayedItems:(id)arg1;

@end
