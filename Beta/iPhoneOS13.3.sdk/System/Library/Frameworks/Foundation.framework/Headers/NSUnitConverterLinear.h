/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSUnitConverter.h>

#import <Foundation/Swift-Protocol.h>

@interface NSUnitConverterLinear : NSUnitConverter <Swift>

{
    double _coefficient;
    double _constant;
}

@property (readonly) double coefficient;
@property (readonly) double constant;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)baseUnitValueFromValue:(double)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;
- (id)initWithCoefficient:(double)arg1 constant:(double)arg2;
- (id)initWithCoefficient:(double)arg1;

@end
