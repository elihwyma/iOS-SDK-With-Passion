/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFTimeCondition, NSString;

@interface HFTimeConditionItem : HFItem

{
    HFTimeCondition *_condition;
    unsigned long long _type;
}

@property (retain, nonatomic) HFTimeCondition *condition;
@property (nonatomic, readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)conditionTypeForCondition:(id)arg1;
+ (id)_formattedStringForTimeCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)defaultConditionForType:(unsigned long long)arg1;
+ (id)_nameForConditionType:(unsigned long long)arg1 formattingStyle:(long long)arg2;
+ (id)_formattedStringForTimeRangeCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_formattedStringForDateComponentsCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_formattedStringForSunriseSunsetCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_formattedStringForOffset:(id)arg1;

- (id)init;
- (id)initWithCondition:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithConditionType:(unsigned long long)arg1 condition:(id)arg2;
- (id)initWithConditionType:(unsigned long long)arg1;

@end
