/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSError, NSFileCoordinator, NSMetadataQuery, NSProgress, NSURL;

@interface WFiCloudFileDownloadOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    NSURL *_fileURL;
    NSArray *_downloadedFiles;
    NSError *_downloadError;
    NSFileCoordinator *_fileCoordinator;
    NSProgress *_progress;
    NSMetadataQuery *_query;
}

@property (nonatomic, readonly) NSFileCoordinator *fileCoordinator;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) NSMetadataQuery *query;
@property (nonatomic, getter=isExecuting) _Bool executing;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSArray *downloadedFiles;
@property (nonatomic, readonly) NSError *downloadError;

- (void)start;
- (_Bool)isAsynchronous;
- (void)queryDidFinishGathering:(id)arg1;
- (id)initWithFileURL:(id)arg1 progress:(id)arg2;
- (void)getFileInfoForURL:(id)arg1 fileIsUbiquitous:(_Bool *)arg2 fileIsDirectory:(_Bool *)arg3 fileSize:(id *)arg4 error:(id *)arg5;
- (void)downloadItemAtFileURL:(id)arg1 ofSize:(id)arg2 fileIsUbiquitous:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)queryDidUpdate:(id)arg1;
- (void)finishRunningWithFiles:(id)arg1 error:(id)arg2;

@end
