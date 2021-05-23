/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome;

@protocol HFServiceLikeItem;

@interface HUAssociatedSceneListItem : HFItem

{
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    HMHome *_home;
    unsigned long long _context;
}

@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) unsigned long long context;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 serviceLikeItem:(id)arg2 context:(unsigned long long)arg3;

@end
