/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSUnit.h>

#import <Foundation/Swift-Protocol.h>

@class NSUnitConverter;

@interface NSDimension : NSUnit <Swift>

{
    unsigned long long _reserved;
    NSUnitConverter *_converter;
}

@property (readonly) unsigned long long specifier;
@property (copy, readonly) NSUnitConverter *converter;

+ (_Bool)supportsSecureCoding;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dimension;
- (id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3;
- (id)initWithSymbol:(id)arg1 converter:(id)arg2;

@end
