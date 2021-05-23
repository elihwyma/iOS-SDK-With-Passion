/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome, NSSet;

@interface HUSoftwareUpdateActionAndProgressItem : HFItem

{
    HMHome *_home;
    NSSet *_accessories;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *accessories;

- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessories:(id)arg1;
- (id)_filteredAccessories;

@end
