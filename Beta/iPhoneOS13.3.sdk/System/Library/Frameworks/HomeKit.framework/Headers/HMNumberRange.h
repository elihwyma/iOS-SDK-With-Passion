/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HMNumberRange : NSObject

{
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

@property (nonatomic, readonly) NSNumber *minValue;
@property (nonatomic, readonly) NSNumber *maxValue;

+ (id)numberRangeWithMaxValue:(id)arg1;
+ (id)numberRangeWithMinValue:(id)arg1;
+ (id)numberRangeWithMinValue:(id)arg1 maxValue:(id)arg2;

- (id)description;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2;

@end
