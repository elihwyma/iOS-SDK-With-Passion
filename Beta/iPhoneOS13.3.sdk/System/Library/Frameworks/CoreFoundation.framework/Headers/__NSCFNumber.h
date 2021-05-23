/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/__NSCFType.h>

__attribute__((visibility("hidden")))
@interface __NSCFNumber : __NSCFType

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (float)floatValue;
- (double)doubleValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)retainCount;
- (_Bool)isNSNumber__;
- (const char *)objCType;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (int)intValue;
- (unsigned int)unsignedIntValue;
- (long long)longValue;
- (unsigned long long)unsignedLongValue;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)boolValue;
- (long long)_cfNumberType;
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;
- (long long)compare:(id)arg1;
- (long long)_reverseCompare:(id)arg1;
- (_Bool)isEqualToNumber:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)stringValue;
- (void)getValue:(void *)arg1;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)_cfTypeID;

@end
