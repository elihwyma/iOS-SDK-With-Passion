/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteServiceItemProvider : HFItemProvider

{
    unsigned long long _maximumNumberOfItems;
    HMHome *_home;
    NSMutableSet *_serviceLikeItems;
}

@property (retain, nonatomic) NSMutableSet *serviceLikeItems;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long maximumNumberOfItems;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;

@end
