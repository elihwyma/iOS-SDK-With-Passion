/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSNumber.h>

__attribute__((visibility("hidden")))
@interface _PFCachedNumber : NSNumber

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)valueWithBytes:(const void *)arg1 objCType:(const char *)arg2;
+ (id)value:(const void *)arg1 withObjCType:(const char *)arg2;

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
- (id)description;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copy;
- (_Bool)boolValue;
- (id)descriptionWithLocale:(id)arg1;
- (id)stringValue;
- (void)getValue:(void *)arg1;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;
- (id)objectID;

@end
