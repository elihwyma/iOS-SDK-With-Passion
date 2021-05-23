/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSNumberFormatter.h>

#import <Home/Swift-Protocol.h>

@class NSNumber;

@interface HFPercentFormatter : NSNumberFormatter <Swift>

{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;

+ (id)_percentageFromValue:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;
+ (id)_valueFromPercentage:(id)arg1 forMinimumValue:(id)arg2 maximumValue:(id)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (id)stringForRelativePercentValue:(id)arg1;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2;

@end
