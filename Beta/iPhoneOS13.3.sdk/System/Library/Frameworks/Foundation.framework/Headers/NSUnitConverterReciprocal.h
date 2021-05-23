/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSUnitConverter.h>

#import <Foundation/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSUnitConverterReciprocal : NSUnitConverter <Swift>

{
    double _reciprocalValue;
}

@property (readonly) double reciprocalValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)baseUnitValueFromValue:(double)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;
- (id)initWithReciprocalValue:(double)arg1;

@end
