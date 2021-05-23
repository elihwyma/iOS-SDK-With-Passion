/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSNumber.h>

@interface NSConstantDoubleNumber : NSNumber

{
    double _value;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;

- (float)floatValue;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (id)init;
- (unsigned long long)retainCount;
- (const char *)objCType;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longValue;
- (unsigned long long)unsignedLongValue;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (_Bool)boolValue;
- (void)getValue:(void *)arg1;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (CDStruct_5fe7aead)decimalValue;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;

@end
