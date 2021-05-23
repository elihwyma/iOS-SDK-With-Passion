/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSLocale, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface NSUnitFormatter : NSFormatter <Swift>

{
    NSNumberFormatter *_numberFormatter;
    unsigned long long _unitOptions;
    long long _unitStyle;
    struct UAMeasureFormat *_formatter;
    struct UPluralRules *_prules;
    _Bool _modified;
    NSLocale *_locale;
}

@property (copy) NSNumberFormatter *numberFormatter;
@property (copy) NSLocale *locale;
@property unsigned long long unitOptions;
@property long long unitStyle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (int)_determineUnitsToFormat:(int *)arg1 fromMeasurement:(id)arg2;
- (id)stringForValue:(double)arg1 unit:(unsigned long long)arg2;
- (void)checkIfModified;
- (id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4;
- (id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2;
- (id)stringFromUnit:(id)arg1;

@end
