/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome;

@protocol HFServiceLikeItem;

@interface HUAcccessorySceneListContentItem : HFItem

{
    unsigned long long _contentSource;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    HMHome *_home;
}

@property (nonatomic, readonly) unsigned long long contentSource;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, readonly) HMHome *home;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;

@end
