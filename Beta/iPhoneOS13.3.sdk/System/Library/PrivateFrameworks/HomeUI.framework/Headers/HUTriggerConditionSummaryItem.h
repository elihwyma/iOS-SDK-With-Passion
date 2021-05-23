/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMHome, NSArray;

@interface HUTriggerConditionSummaryItem : HFItem

{
    NSArray *_conditions;
    HMHome *_home;
}

@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, readonly) HMHome *home;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithConditions:(id)arg1 home:(id)arg2;

@end
