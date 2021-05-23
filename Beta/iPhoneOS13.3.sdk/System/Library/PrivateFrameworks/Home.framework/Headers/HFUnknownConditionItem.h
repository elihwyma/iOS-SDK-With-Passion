/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFCondition, NSString;

@interface HFUnknownConditionItem : HFItem

{
    HFCondition *_condition;
}

@property (nonatomic, readonly) HFCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCondition:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
