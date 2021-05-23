/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HULinkedApplicationItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_linkedApplicationItems;
}

@property (retain, nonatomic) NSMutableSet *linkedApplicationItems;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;

+ (_Bool)prefersNonBlockingReloads;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)_generateItemsFromSoftwareLookupResult:(id)arg1;

@end
