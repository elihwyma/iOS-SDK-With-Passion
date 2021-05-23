/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class FPItemManager, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface FPFetchThumbnailsOperation

{
    NSArray *_items;
    struct CGSize _desiredSize;
    double _screenScale;
    FPItemManager *_itemManager;
    NSOperationQueue *_subOperationQueue;
    NSMutableArray *_subOperations;
    CDUnknownBlockType _perThumbnailCompletionBlock;
    CDUnknownBlockType _thumbnailsFetchCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType perThumbnailCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType thumbnailsFetchCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)operation:(id)arg1 didReceiveProgressInfo:(id)arg2 error:(id)arg3;
- (void)_perItemCompletionBlockFor:(id)arg1 thumbnail:(id)arg2 contentType:(id)arg3 error:(id)arg4;
- (id)initWithItems:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3 itemManager:(id)arg4;

@end
