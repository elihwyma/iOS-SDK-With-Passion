/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class BRGlobalProgressProxy, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface BRUploadAllFilesForLogOutOperation : BROperation

{
    BRGlobalProgressProxy *_progress;
    CDUnknownBlockType _uploadAllFilesCompletionBlock;
    NSMutableDictionary *_errorsByContainerID;
    NSMutableArray *_hiddenContainersWithError;
    NSOperationQueue *_opQueue;
    _Bool _shouldKeepDataLocal;
}

@property (retain) BRGlobalProgressProxy *progress;
@property (copy) CDUnknownBlockType uploadAllFilesCompletionBlock;
@property _Bool shouldKeepDataLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)evictAllFilesInGroup:(id)arg1;

@end
