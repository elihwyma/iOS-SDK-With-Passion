/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSHashTable.h>

__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable

{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _callBacks;
    struct __CFBasicHash *_ht;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copy;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (void *)getItem:(const void *)arg1;
- (void)removeItem:(const void *)arg1;
- (void)removeAllItems;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (void)insertItem:(const void *)arg1;

@end
