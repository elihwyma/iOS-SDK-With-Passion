/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFCondition.h>

@class HMCharacteristic;

@interface HFCharacteristicCondition : HFCondition

{
    HMCharacteristic *_characteristic;
    unsigned long long _operatorType;
    id _value;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) id value;

+ (id)_characteristicPredicateInCompoundPredicate:(id)arg1;
+ (id)_valuePredicateInCompoundPredicate:(id)arg1;

- (id)initWithPredicate:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;

@end
