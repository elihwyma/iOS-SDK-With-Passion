/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFCharacteristicCondition, NSString;

@interface HFCharacteristicConditionItem : HFItem

{
    HFCharacteristicCondition *_condition;
}

@property (nonatomic, readonly) HFCharacteristicCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_nameForCharacteristicCondition:(id)arg1;

- (id)init;
- (id)initWithCondition:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
