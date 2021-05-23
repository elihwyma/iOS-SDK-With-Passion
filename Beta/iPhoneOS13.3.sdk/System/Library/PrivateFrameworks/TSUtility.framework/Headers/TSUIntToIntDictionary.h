/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@interface TSUIntToIntDictionary : NSObject <Swift>

{
    struct __CFDictionary *mDictionary;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)allKeys;
- (_Bool)containsKey:(long long)arg1;
- (id)keyEnumerator;
- (id)allValues;
- (void)setInt:(long long)arg1 forKey:(long long)arg2;
- (struct __CFDictionary *)p_cfDictionary;
- (long long)intForKey:(long long)arg1;
- (_Bool)intIsPresentForKey:(long long)arg1 outValue:(long long *)arg2;
- (void)removeIntForKey:(long long)arg1;
- (void)removeAllInts;
- (void)applyFromIntToIntDictionary:(id)arg1;
- (id)arrayOfBoxedKeys;

@end
