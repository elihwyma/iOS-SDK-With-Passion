/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDecimalNumber.h>

__attribute__((visibility("hidden")))
@interface NSDecimalNumberPlaceholder : NSDecimalNumber

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

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
- (id)init;
- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithString:(id)arg1;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithDecimal:(CDStruct_5fe7aead)arg1;
- (id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(_Bool)arg3;

@end
