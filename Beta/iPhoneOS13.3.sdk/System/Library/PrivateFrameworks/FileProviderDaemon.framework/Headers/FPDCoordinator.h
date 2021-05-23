/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDExtensionManager, NSFileCoordinator, NSMutableSet, NSOperationQueue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDCoordinator : NSObject

{
    NSMutableSet *_currentlyAccessedURLs;
    NSFileCoordinator *_fileCoordinator;
    NSOperationQueue *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    FPDExtensionManager *_extensionManager;
}

@property (weak, nonatomic, readonly) FPDExtensionManager *extensionManager;

- (void)dealloc;
- (void)cancel;
- (void)stopAccessingURL:(id)arg1;
- (void)startAccessingURLForAtomDuration:(id)arg1;
- (void)resolveItemOrURL:(id)arg1 recursively:(_Bool)arg2 coordinateIfExport:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)resolveItemOrURL:(id)arg1 recursively:(_Bool)arg2 andCoordinateWithHandler:(CDUnknownBlockType)arg3;
- (void)resolveItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 toTargetFolderURL:(id)arg3 targetMaterializeOption:(unsigned long long)arg4 sourceMaterializeOption:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithExtensionManager:(id)arg1 callbackQueue:(id)arg2;
- (void)stopAccessingAllURLs;
- (void)coordinateAtURL:(id)arg1 recursively:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)resolveItem:(id)arg1 recursively:(_Bool)arg2 andCoordinateWithHandler:(CDUnknownBlockType)arg3;
- (id)_readingIntentWithURL:(id)arg1 materializeOption:(unsigned long long)arg2;
- (void)coordinateForCopyingFromURL:(id)arg1 toURL:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)coordinateForMovingFromURL:(id)arg1 toURL:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
