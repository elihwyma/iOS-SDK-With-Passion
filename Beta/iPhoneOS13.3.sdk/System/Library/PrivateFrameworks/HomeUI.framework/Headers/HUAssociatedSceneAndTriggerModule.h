/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItem, HFStaticItemProvider, HMHome;

@protocol HFServiceLikeItem;

@interface HUAssociatedSceneAndTriggerModule : HFItemModule

{
    HMHome *_home;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    unsigned long long _context;
    HFItem *_scenesItem;
    HFItem *_triggersItem;
    HFStaticItemProvider *_staticItemProvider;
}

@property (nonatomic, readonly) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, readonly) HFItem *scenesItem;
@property (nonatomic, readonly) HFItem *triggersItem;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 serviceLikeItem:(id)arg3 context:(unsigned long long)arg4;

@end
