/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDMoveWriter;

__attribute__((visibility("hidden")))
@interface FPDMoveWriterToProvider : NSObject

{
    FPDMoveWriter *_writer;
}

- (id)_remoteProxy;
- (id)initWithWriter:(id)arg1;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_postImportStepForItem:(id)arg1 sourceURL:(id)arg2 targetURL:(id)arg3 tempFolder:(id)arg4 wasCopy:(_Bool)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_createTargetItemWithProxy:(id)arg1 target:(id)arg2 contents:(id)arg3 targetName:(id)arg4 lastUsedDate:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_importURL:(id)arg1 source:(id)arg2 target:(id)arg3 as:(id)arg4 lastUsedDate:(id)arg5 initialImportFinished:(CDUnknownBlockType)arg6 progressAvailable:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_resolveItemOrURL:(id)arg1 andCoordinateWithHandler:(CDUnknownBlockType)arg2;
- (void)_createFolder:(id)arg1 under:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
