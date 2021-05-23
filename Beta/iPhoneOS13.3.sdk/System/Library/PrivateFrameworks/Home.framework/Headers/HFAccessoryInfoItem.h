/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem

{
    unsigned long long _infoType;
    HMAccessory *_accessory;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (nonatomic) unsigned long long infoType;

+ (id)localizedStringForCharacteristic:(id)arg1;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2;

@end
