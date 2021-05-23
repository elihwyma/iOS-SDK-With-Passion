/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSOperationQueue, NSURL;

@interface BRiWorkWebShareMigrateOperation : BROperation

{
    NSURL *_url;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _shareMigrationCompletionBlock;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy) CDUnknownBlockType shareMigrationCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_startSharingReadWrite:(_Bool)arg1;
- (void)_migrateShare;
- (void)_copyShare;

@end
