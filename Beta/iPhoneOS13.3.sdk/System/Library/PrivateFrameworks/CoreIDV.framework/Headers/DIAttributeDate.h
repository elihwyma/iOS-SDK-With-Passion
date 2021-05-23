/*
 Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

#import <CoreIDV/DIAttribute.h>

@class NSDate;

@interface DIAttributeDate : DIAttribute

{
    _Bool _requireDay;
    _Bool _requireMonth;
    _Bool _requireYear;
    NSDate *defaultValue;
    NSDate *currentValue;
}

@property (nonatomic) _Bool requireDay;
@property (nonatomic) _Bool requireMonth;
@property (nonatomic) _Bool requireYear;
@property (copy, nonatomic) NSDate *defaultValue;
@property (copy, nonatomic, getter=getCurrentValue) NSDate *currentValue;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
