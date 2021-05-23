/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSValue.h>

@class NSString;

@interface NSNumber : NSValue

@property (readonly) CDStruct_5fe7aead decimalValue;
@property (readonly) BOOL charValue;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) short shortValue;
@property (readonly) unsigned short unsignedShortValue;
@property (readonly) int intValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) long long longValue;
@property (readonly) unsigned long long unsignedLongValue;
@property (readonly) long long longLongValue;
@property (readonly) unsigned long long unsignedLongLongValue;
@property (readonly) float floatValue;
@property (readonly) double doubleValue;
@property (readonly) _Bool boolValue;
@property (readonly) long long integerValue;
@property (readonly) unsigned long long unsignedIntegerValue;
@property (copy, readonly) NSString *stringValue;

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
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithLong:(long long)arg1;

- (id)initWithChar:(BOOL)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithDouble:(double)arg1;
- (_Bool)isNSNumber__;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;
- (long long)compare:(id)arg1;
- (long long)_reverseCompare:(id)arg1;
- (_Bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (_Bool)isEqualToNumber:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)_allowsDirectEncoding;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;

@end
