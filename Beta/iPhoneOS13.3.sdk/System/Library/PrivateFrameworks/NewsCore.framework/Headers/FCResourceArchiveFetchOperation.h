/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSURL, NSURLSessionDownloadTask;

@protocol FCContentContext;

@interface FCResourceArchiveFetchOperation : FCOperation

{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    NSURL *_archiveURL;
    id <FCContentContext> _context;
    NSURLSessionDownloadTask *_downloadTask;
    NSArray *_resultResources;
}

@property (copy, nonatomic) NSURL *archiveURL;
@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (retain, nonatomic) NSArray *resultResources;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionHandler;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)_ensureResourcesAreReadyForUse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unzipResourcesFromArchiveFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithArchiveURL:(id)arg1 context:(id)arg2;

@end
