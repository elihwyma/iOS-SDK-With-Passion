/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDirectoryEnumerator.h>

@class NSArray, NSFileAttributes, NSString;

__attribute__((visibility("hidden")))
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator

{
    NSString *path;
    NSArray *contents;
    unsigned long long idx;
    NSString *prepend;
    NSAllDescendantPathsEnumerator *under;
    NSFileAttributes *directoryAttributes;
    NSString *pathToLastReportedItem;
    unsigned long long depth;
    _Bool cross;
    char _padding[3];
}

+ (id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(_Bool)arg4 depth:(unsigned long long)arg5;

- (void)dealloc;
- (id)nextObject;
- (id)fileAttributes;
- (id)directoryAttributes;
- (unsigned long long)level;
- (void)skipDescendents;
- (void)skipDescendants;
- (_Bool)isEnumeratingDirectoryPostOrder;
- (id)_under;
- (id)currentSubdirectoryAttributes;

@end
