/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HKReferenceRangeViewData : NSObject

{
    _Bool _useOutOfRangeValueColor;
    NSString *_valueString;
    NSString *_unitString;
    NSString *_rangeLowString;
    NSString *_rangeHighString;
    NSNumber *_value;
    NSNumber *_rangeLow;
    NSNumber *_rangeHigh;
}

@property (copy, nonatomic) NSString *valueString;
@property (copy, nonatomic) NSString *unitString;
@property (copy, nonatomic) NSString *rangeLowString;
@property (copy, nonatomic) NSString *rangeHighString;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *rangeLow;
@property (copy, nonatomic) NSNumber *rangeHigh;
@property (nonatomic) _Bool useOutOfRangeValueColor;

+ (id)referenceRangeViewDataFromInspectableValueInRange:(id)arg1;
+ (id)_codedQuantityForValueCollection:(id)arg1;
+ (id)_codedQuantityForValue:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
