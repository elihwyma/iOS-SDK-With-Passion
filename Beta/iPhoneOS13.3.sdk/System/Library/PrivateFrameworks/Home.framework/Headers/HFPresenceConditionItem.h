/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFPresenceCondition, HMHome, NSString;

@interface HFPresenceConditionItem : HFItem

{
    HFPresenceCondition *_condition;
    HMHome *_home;
}

@property (retain, nonatomic) HFPresenceCondition *condition;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCondition:(id)arg1 home:(id)arg2;

@end
