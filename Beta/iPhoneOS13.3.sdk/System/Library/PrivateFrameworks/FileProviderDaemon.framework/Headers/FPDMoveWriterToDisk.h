/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDMoveWriter, NSFileManager;

__attribute__((visibility("hidden")))
@interface FPDMoveWriterToDisk : NSObject

{
    FPDMoveWriter *_writer;
    NSFileManager *_fileManager;
    _Bool _stopAccessingDestination;
}

- (void)dealloc;
- (id)initWithWriter:(id)arg1;
- (void)_performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_respectLastUsageDatePolicyForDestinationURL:(id)arg1;
- (void)_performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_resolveLocator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;

@end
