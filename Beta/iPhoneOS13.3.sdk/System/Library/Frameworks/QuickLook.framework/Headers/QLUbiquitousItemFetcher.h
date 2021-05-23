/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLItemFetcher.h>

@class FPSandboxingURLWrapper, NSFileCoordinator, NSMutableArray, NSNumber, NSURL, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLUbiquitousItemFetcher : QLItemFetcher

{
    FPSandboxingURLWrapper *_sandboxingWrapper;
    NSFileCoordinator *_fileCoordinator;
    NSMutableArray *_updateBlocks;
    id _progressSubscriber;
    NSNumber *_sizeTotalUnitCount;
    QLURLHandler *_zipPackageUrlHandler;
    _Bool _shouldZipPackageIfNeeded;
    _Bool _isAccessingURL;
}

@property (nonatomic, readonly) NSURL *fileURL;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)itemSize;
- (id)shareableItem;
- (_Bool)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)fetchedContent;
- (id)newItemProvider;
- (id)initWithZippingPackageIfNeeded:(_Bool)arg1;
- (void)_removeUpdateBlockIfNeeded:(CDUnknownBlockType)arg1;
- (id)_createURLForPackageIfNeeded;
- (void)subscribeToPreviewItemProgress;
- (void)_deleteTempraryZipPackageFileIfNeeded;
- (id)initWithSandboxingURLWrapper:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;
- (id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;
- (_Bool)canBeCanceled;
- (void)cancelFetch;

@end
