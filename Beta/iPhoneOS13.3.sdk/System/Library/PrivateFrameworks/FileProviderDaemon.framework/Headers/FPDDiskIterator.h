/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/FPDIterator.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface FPDDiskIterator : FPDIterator

{
    NSURL *_rootURL;
    _Bool _stopAccessingRoot;
    _Bool _sentRoot;
    _Bool _lastItemWasPackage;
    _Bool _done;
    NSError *_error;
    unsigned long long _numFoldersPopped;
    struct __CFURLEnumerator *_enumerator;
}

- (void)dealloc;
- (id)error;
- (_Bool)done;
- (_Bool)skipMaterializedTreeTraversal;
- (id)nextWithError:(id *)arg1;
- (unsigned long long)numFoldersPopped;
- (id)initWithURL:(id)arg1 isDirectory:(_Bool)arg2;

@end
