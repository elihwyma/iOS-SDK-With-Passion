/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSUnit;

@interface NSMeasurement : NSObject <Swift>

{
    NSUnit *_unit;
    double _doubleValue;
}

@property (copy, readonly) NSUnit *unit;
@property (readonly) double doubleValue;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)measurementByConvertingToUnit:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(id)arg2;
- (_Bool)canBeConvertedToUnit:(id)arg1;
- (id)_performOperation:(long long)arg1 withMeasurement:(id)arg2;
- (id)measurementByAddingMeasurement:(id)arg1;
- (id)measurementBySubtractingMeasurement:(id)arg1;

@end
