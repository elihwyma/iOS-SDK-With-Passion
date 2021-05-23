/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSNumber.h>

@interface NSDecimalNumber : NSNumber

{
    unsigned int _exponent:8;
    unsigned int _length:4;
    unsigned int _isNegative:1;
    unsigned int _isCompact:1;
    unsigned int _reserved:1;
    unsigned int _hasExternalRefCount:1;
    unsigned int _refs:16;
    unsigned short _mantissa[0];
}

@property (readonly) CDStruct_5fe7aead decimalValue;
@property (readonly) const char *objCType;
@property (readonly) double doubleValue;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithBool:(_Bool)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)zero;
+ (id)decimalNumberWithDecimal:(CDStruct_5fe7aead)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)notANumber;
+ (id)defaultBehavior;
+ (id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(_Bool)arg3;
+ (id)decimalNumberWithString:(id)arg1;
+ (id)decimalNumberWithString:(id)arg1 locale:(id)arg2;
+ (id)minimumDecimalNumber;
+ (id)maximumDecimalNumber;
+ (id)one;
+ (void)setDefaultBehavior:(id)arg1;

- (float)floatValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longValue;
- (unsigned long long)unsignedLongValue;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)boolValue;
- (long long)compare:(id)arg1;
- (_Bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)descriptionWithLocale:(id)arg1;
- (void)getValue:(void *)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (id)decimalNumberByDividingBy:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithDecimal:(CDStruct_5fe7aead)arg1;
- (id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(_Bool)arg3;
- (id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByRaisingToPower:(unsigned long long)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2;
- (id)decimalNumberByMultiplyingBy:(id)arg1;
- (id)decimalNumberByAdding:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1;
- (id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2;
- (id)decimalNumberBySubtracting:(id)arg1;
- (id)decimalNumberByRaisingToPower:(unsigned long long)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg1;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)arg1;

@end
