/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _LSDBEnumerator : LSEnumerator

{
    struct Context _context;
    unsigned long long _index;
    id _lastFastObject;
    unsigned int _hasReachedEnd:1;
    unsigned int _hasTriedToPrepare:1;
    unsigned int _hasPrepared:1;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)nextObject;
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (_Bool)prepareIfNeeded;
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (id).cxx_construct;

@end
