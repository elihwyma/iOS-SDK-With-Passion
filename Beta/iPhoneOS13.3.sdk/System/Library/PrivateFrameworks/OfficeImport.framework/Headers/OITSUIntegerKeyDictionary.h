/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OITSUIntegerKeyDictionary : NSObject <Swift>

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
- (void)removeAllObjects;
- (id)objectForKey:(long long)arg1;
- (void)removeObjectForKey:(long long)arg1;
- (id)keyEnumerator;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (id)valueEnumerator;
- (struct __CFDictionary *)p_cfDictionary;

@end
