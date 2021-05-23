/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeAsValue : NSValue

{
    CDStruct_1b6d18a9 _time;
}

+ (_Bool)supportsSecureCoding;
+ (id)valueWithCMTime:(CDStruct_1b6d18a9)arg1;

- (float)floatValue;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (const char *)objCType;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longValue;
- (unsigned long long)unsignedLongValue;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)boolValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void *)arg1;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (_Bool)isEqualToValue:(id)arg1;
- (CDStruct_1b6d18a9)CMTimeValue;

@end
