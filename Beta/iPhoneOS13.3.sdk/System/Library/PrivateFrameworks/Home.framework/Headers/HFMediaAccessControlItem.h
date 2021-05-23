/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HMHome;

@interface HFMediaAccessControlItem : HFItem

{
    HMHome *_home;
}

@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)initWithHome:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
