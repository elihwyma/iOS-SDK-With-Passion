/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HFNumberRange : NSObject <Swift>

{
    unsigned long long _type;
    NSNumber *_maxValue;
    NSNumber *_midValue;
    NSNumber *_minValue;
}

@property (copy, nonatomic) NSNumber *maxValue;
@property (copy, nonatomic) NSNumber *midValue;
@property (copy, nonatomic) NSNumber *minValue;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSNumber *spanValue;
@property (nonatomic, readonly) CDStruct_c3b9c2ee floatRangeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)valueWithValue:(id)arg1;
+ (id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2;
+ (id)rangeWithFloatRange:(CDStruct_c3b9c2ee)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)unionRange:(id)arg1;
- (id)percentageValueForValue:(id)arg1;
- (id)mapValue:(id)arg1 fromRange:(id)arg2;
- (id)intersectRange:(id)arg1;

@end
