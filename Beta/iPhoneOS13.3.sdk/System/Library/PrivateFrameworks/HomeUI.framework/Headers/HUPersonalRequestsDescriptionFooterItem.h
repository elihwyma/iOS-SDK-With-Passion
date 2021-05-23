/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HULocationDeviceManager;

@interface HUPersonalRequestsDescriptionFooterItem : HFItem

{
    HULocationDeviceManager *_locationDeviceManager;
}

@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;

@end
