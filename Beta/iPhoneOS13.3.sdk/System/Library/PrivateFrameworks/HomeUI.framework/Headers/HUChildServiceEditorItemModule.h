/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFServiceItemProvider, HMAccessory, HMHome, NSSet;

@protocol HFServiceLikeItem;

@interface HUChildServiceEditorItemModule : HFItemModule

{
    NSSet *_itemProviders;
    HFItem<HFServiceLikeItem> *_sourceItem;
    HFServiceItemProvider *_childServiceItemProvider;
    unsigned long long _editingMode;
    HMHome *_home;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *sourceItem;
@property (retain, nonatomic) HFServiceItemProvider *childServiceItemProvider;
@property (nonatomic, readonly) unsigned long long editingMode;
@property (nonatomic, readonly) HMHome *home;

+ (id)supportedServiceTypes;
+ (CDUnknownBlockType)childItemComparator;

- (id)itemProviders;
- (id)_createItemProviders;
- (_Bool)canToggleConfigurationStateForItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 mode:(unsigned long long)arg4;
- (id)_isConfiguredControlItemForItem:(id)arg1;
- (long long)configurationStateForItem:(id)arg1;
- (id)toggleConfigurationStateForItem:(id)arg1;

@end
