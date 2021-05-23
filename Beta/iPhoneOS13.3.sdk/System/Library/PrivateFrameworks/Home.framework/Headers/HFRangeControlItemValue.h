/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFNumberRange, NSNumber;

@interface HFRangeControlItemValue : NSObject

{
    unsigned long long _mode;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_targetValue;
}

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *targetValue;
@property (nonatomic, readonly) HFNumberRange *numberRange;

+ (id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
+ (id)targetValueWithValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
