/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome;

@protocol HFServiceLikeItem;

@interface HUServiceDetailsAbstractItem : HFItem

{
    HFItem<HFServiceLikeItem> *_sourceServiceItem;
    HMHome *_home;
}

@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem;
@property (retain, nonatomic) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isBridge;
- (_Bool)isCamera;
- (_Bool)isAccessory;
- (id)_subclass_updateWithOptions:(id)arg1;
- (_Bool)isItemGroup;
- (_Bool)isContainedWithinItemGroup;
- (_Bool)isService;
- (_Bool)isContainedInAParent;
- (_Bool)isNetworkRouterSatellite;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2;
- (_Bool)isMultiServiceAccessory;
- (_Bool)isNotificationSupportedCamera;
- (_Bool)isMediaAccessory;
- (_Bool)isMediaAccessoryGroup;
- (_Bool)isAccessoryDisplayedAsIndividualTiles;
- (_Bool)isNetworkRouter;

@end
