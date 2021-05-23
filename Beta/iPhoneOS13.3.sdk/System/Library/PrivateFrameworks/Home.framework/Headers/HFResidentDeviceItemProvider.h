/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_residentDeviceItems;
}

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
