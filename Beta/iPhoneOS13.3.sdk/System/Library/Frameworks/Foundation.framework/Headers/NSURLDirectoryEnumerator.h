/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDirectoryEnumerator.h>

__attribute__((visibility("hidden")))
@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator

{
    struct __CFURLEnumerator *_enumerator;
    CDUnknownBlockType _errorHandler;
    _Bool shouldContinue;
    _Bool isPostOrderDirectory;
}

@property (copy) CDUnknownBlockType errorHandler;

- (void)dealloc;
- (id)nextObject;
- (id)fileAttributes;
- (id)directoryAttributes;
- (unsigned long long)level;
- (void)skipDescendents;
- (void)skipDescendants;
- (_Bool)isEnumeratingDirectoryPostOrder;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;

@end
