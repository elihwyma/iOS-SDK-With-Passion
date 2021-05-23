/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet, NSSet;

@interface HFConditionItemProvider : HFItemProvider

{
    NSSet *_conditions;
    HMHome *_home;
    NSMutableSet *_conditionItems;
}

@property (nonatomic, readonly) NSMutableSet *conditionItems;
@property (retain, nonatomic) NSSet *conditions;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)items;
- (id)reloadItems;
- (id)initWithConditions:(id)arg1 home:(id)arg2;

@end
