/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue

{
    unsigned long long _specialFlags;
    void *typeInfo;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (const char *)objCType;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void *)arg1;
- (const void *)_value;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;
- (_Bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2 strict:(_Bool)arg3;
- (_Bool)isEqualToValue:(id)arg1;

@end
