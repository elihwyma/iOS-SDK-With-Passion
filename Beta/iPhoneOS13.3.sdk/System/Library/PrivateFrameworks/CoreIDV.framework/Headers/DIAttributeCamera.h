/*
 Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

#import <CoreIDV/DIAttribute.h>

@class NSArray;

@interface DIAttributeCamera : DIAttribute

{
    NSArray *currentValue;
    NSArray *_scanRequirements;
}

@property (retain, nonatomic) NSArray *scanRequirements;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)defaultValue;

@end
