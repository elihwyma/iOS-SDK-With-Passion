/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HFUserItem, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserOptionItem : HFItem

{
    HFUserItem *_userItem;
    HULocationDeviceManager *_locationDeviceManager;
    HUPresenceCurrentUserLocationDevice *_selectedLocationDevice;
}

@property (nonatomic, readonly) HFUserItem *userItem;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUserItem:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3;

@end
