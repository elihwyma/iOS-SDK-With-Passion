/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <Foundation/NSNumber.h>

@interface ICSPredefinedValue : NSNumber

{
    long long _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)numberWithLong:(long long)arg1;

- (id)initWithLong:(long long)arg1;
- (const char *)objCType;
- (long long)longValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getValue:(void *)arg1;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;

@end
