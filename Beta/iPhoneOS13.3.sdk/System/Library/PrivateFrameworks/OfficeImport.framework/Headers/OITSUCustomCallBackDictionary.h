/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface OITSUCustomCallBackDictionary : NSMutableDictionary

{
    struct __CFDictionary *mDictionary;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const CDStruct_90be15af *)arg2 valueCallBacks:(const CDStruct_70d275a4 *)arg3;
- (id)initWithCFDictionary:(struct __CFDictionary *)arg1;

@end
