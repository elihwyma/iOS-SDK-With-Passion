/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity;

@interface HKQuantityRange : NSObject

{
    HKQuantity *_minimum;
    HKQuantity *_maximum;
}

@property (nonatomic, readonly) HKQuantity *minimum;
@property (nonatomic, readonly) HKQuantity *maximum;

- (id)init;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2;
- (_Bool)containsQuantityInclusive:(id)arg1;

@end
