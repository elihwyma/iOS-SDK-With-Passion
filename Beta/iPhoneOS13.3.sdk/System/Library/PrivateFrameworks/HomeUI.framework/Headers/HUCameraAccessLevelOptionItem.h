/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome, HMUser;

@interface HUCameraAccessLevelOptionItem : HFItem

{
    HMUser *_user;
    HMHome *_home;
    unsigned long long _accessLevel;
}

@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) unsigned long long accessLevel;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUser:(id)arg1 home:(id)arg2 accessLevel:(unsigned long long)arg3;

@end
