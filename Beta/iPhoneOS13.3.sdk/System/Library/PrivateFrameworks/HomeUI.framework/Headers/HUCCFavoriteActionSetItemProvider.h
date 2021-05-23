/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteActionSetItemProvider : HFItemProvider

{
    unsigned long long _maximumNumberOfItems;
    HMHome *_home;
    unsigned long long _actionSetItemStyle;
    NSMutableSet *_actionSetItems;
}

@property (retain, nonatomic) NSMutableSet *actionSetItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long maximumNumberOfItems;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;

@end
