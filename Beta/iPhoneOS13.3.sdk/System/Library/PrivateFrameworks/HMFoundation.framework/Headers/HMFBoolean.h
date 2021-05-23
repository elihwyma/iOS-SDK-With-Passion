/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSNumber.h>

@interface HMFBoolean : NSNumber

+ (id)allocWithZone:(struct _NSZone *)arg1;
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
+ (id)booleanWithBool:(_Bool)arg1;

- (const char *)objCType;
- (BOOL)charValue;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)boolValue;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void *)arg1;
- (id)initWithBool:(_Bool)arg1;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;

@end
