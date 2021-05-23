/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFResidentDeviceStatusDetailsItemProvider : HFItemProvider

{
    HMHome *_home;
    CDUnknownBlockType _filter;
    NSMutableSet *_residentDeviceItems;
}

@property (retain, nonatomic) NSMutableSet *residentDeviceItems;
@property (nonatomic, readonly) HMHome *home;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
