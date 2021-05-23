/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLUbiquitousItemFetcher.h>

@class FPItem, FPItemCollection, NSString, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLFPItemFetcher : QLUbiquitousItemFetcher

{
    FPItem *_fpItem;
    QLURLHandler *_fetchedURLHandler;
    FPItemCollection *_itemCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fileURL;
- (id)itemSize;
- (id)shareableItem;
- (_Bool)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;
- (void)_registerItemCollectionIfNeeded;
- (void)_unregisterItemCollectionIfNeeded;
- (void)_urlHandler:(CDUnknownBlockType)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;

@end
