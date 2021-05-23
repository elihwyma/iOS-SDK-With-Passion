/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSOperationQueue, NSProgress, NSSet, NSString, NSURL;

@interface FPFetchPublishingURLOperation : FPActionOperation

{
    FPItem *_item;
    _Bool _isFilePresenter;
    NSOperationQueue *_operationQueue;
    NSURL *_itemURL;
    NSProgress *_remoteCancellableProgress;
    NSProgress *_itemUploadProgress;
    CDUnknownBlockType _fetchCompletionBlock;
    CDUnknownBlockType __t_filePresenterStarted;
}

@property (copy, nonatomic) CDUnknownBlockType _t_filePresenterStarted;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (void)cancel;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItem:(id)arg1;
- (void)actionMain;
- (void)_tryFetchingSharingURL;
- (void)_setupFilePresenterAndWaitForUpload;

@end
