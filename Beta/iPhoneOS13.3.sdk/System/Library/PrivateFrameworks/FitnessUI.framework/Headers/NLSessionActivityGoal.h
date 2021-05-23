/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity;

@interface NLSessionActivityGoal : NSObject

{
    double _doubleValue;
    unsigned long long _goalTypeIdentifier;
}

@property (nonatomic) unsigned long long goalTypeIdentifier;
@property (retain, nonatomic) HKQuantity *value;

+ (_Bool)supportsSecureCoding;
+ (id)goalWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;
+ (id)goalFromURL:(id)arg1;

- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)_doubleValueForQuantity:(id)arg1;
- (id)_quantityForDoubleValue:(double)arg1;
- (id)initWithGoalTypeIdentifier:(unsigned long long)arg1 value:(id)arg2;

@end
