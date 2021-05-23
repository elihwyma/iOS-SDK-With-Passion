/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@interface TSUIntegerKeyDictionary : NSObject <Swift>

{
    struct __CFDictionary *mDictionary;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(long long)arg1;
- (void)removeObjectForKey:(long long)arg1;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (id)valueEnumerator;
- (struct __CFDictionary *)p_cfDictionary;

@end
