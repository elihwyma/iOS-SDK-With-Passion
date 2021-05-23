/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class BRGlobalProgressProxy, BRUploadAllFilesForLogOutOperation, NSMutableArray, NSOperationQueue, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation

{
    BRGlobalProgressProxy *_progress;
    NSMutableArray *_fileCoordinators;
    CDUnknownBlockType _downloadAllFilesCompletionBlock;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

@property (retain) BRGlobalProgressProxy *progress;
@property (copy) CDUnknownBlockType downloadAllFilesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
