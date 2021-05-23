/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMapTable.h>

__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable

{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
        void *notAKeyMarker;
    } _keyCallBacks;
    struct {
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _valueCallBacks;
    struct __CFBasicHash *_ht;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copy;
- (unsigned long long)count;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)allValues;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllItems;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;

@end
