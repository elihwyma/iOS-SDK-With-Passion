/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HMHome, HMUser, NSMutableSet;

@interface HUCameraAccessLevelOptionItemProvider : HFItemProvider

{
    NSMutableSet *_items;
    HMUser *_user;
    HMHome *_home;
}

@property (nonatomic, readonly) NSMutableSet *items;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithUser:(id)arg1 home:(id)arg2;

@end
