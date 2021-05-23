/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFBridgeItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_accessoryItems;
}

@property (retain, nonatomic) NSMutableSet *accessoryItems;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;

- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
