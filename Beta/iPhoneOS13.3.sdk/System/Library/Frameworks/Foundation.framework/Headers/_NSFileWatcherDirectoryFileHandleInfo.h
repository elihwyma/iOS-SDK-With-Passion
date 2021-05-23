/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSFileWatcherFileHandleInfo.h>

__attribute__((visibility("hidden")))
@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo

{
    struct InodeDevPair inodeDevPair;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)close;
- (_Bool)isDirectory;

@end
