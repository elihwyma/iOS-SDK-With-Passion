/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPItemID, NSArray, NSObject, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface FPArchiveOperation : FPActionOperation

{
    NSArray *_items;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _archiveCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType archiveCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_copyArchivedItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_coordinateArchivedItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_zipPathExtension;
- (void)_archiveURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_prepareItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (void)actionMain;
- (void)presendNotifications;
- (void)didUnarchiveItemAtURL:(id)arg1;

@end
