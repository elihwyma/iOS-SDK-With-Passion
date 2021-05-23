/*
 Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface FigFlatToNSDictionaryWrapper : NSDictionary

{
    struct OpaqueFigFlatDictionary *_flatDictionary;
    struct OpaqueFigFlatDictionaryKeySpec *_keySpec;
    int _keySpace;
    void *_dictionaryBacking;
    void *_exportedKeySpec;
    CDUnknownBlockType _deallocatorBlock;
    struct os_unfair_lock_s _lazyInitializationMutex;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (_Bool)_ensureFlatDictionaryIsInitialized;
- (id)arrayForFlatDictionaryArrayDataKey:(CDStruct_38ec6540 *)arg1;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary *)arg1 keySpec:(struct OpaqueFigFlatDictionaryKeySpec *)arg2;
- (id)initLazilyWithFlatDictionaryBacking:(void *)arg1 exportedKeySpec:(void *)arg2 deallocatorBlock:(CDUnknownBlockType)arg3;

@end
