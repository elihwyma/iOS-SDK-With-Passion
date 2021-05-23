/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFAccessoryBrowsingManager, NSMutableSet;

@interface HFDiscoveredAccessoryItemProvider : HFItemProvider

{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
    CDUnknownBlockType _filter;
    NSMutableSet *_discoveredAccessoryItems;
}

@property (retain, nonatomic) NSMutableSet *discoveredAccessoryItems;
@property (nonatomic, readonly) HFAccessoryBrowsingManager *accessoryBrowsingManager;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)init;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithAccessoryBrowsingManager:(id)arg1;

@end
