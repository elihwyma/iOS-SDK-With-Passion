/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSProgress.h>

@class NSMetadataQuery, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface BRDownloadProgressProxy : NSProgress

{
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
}

- (id)initWithURL:(id)arg1;
- (void)stop;
- (void)start;
- (void)_queryDidReceiveUpdate:(id)arg1;

@end
