/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome;

@interface HUAddTriggerItem : HFItem

{
    HMHome *_home;
    unsigned long long _mode;
}

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long mode;

- (id)_subclass_updateWithOptions:(id)arg1;
- (_Bool)_itemisHidden;
- (id)initWithHome:(id)arg1 mode:(unsigned long long)arg2;

@end
