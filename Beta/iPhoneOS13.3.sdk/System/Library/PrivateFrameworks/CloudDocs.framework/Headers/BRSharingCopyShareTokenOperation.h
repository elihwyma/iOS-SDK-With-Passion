/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BROperation

{
    NSURL *_fileURL;
    CDUnknownBlockType _shareTokenCompletionBlock;
    CDUnknownBlockType _shareAndBaseTokenCompletionBlock;
}

@property (copy) CDUnknownBlockType shareTokenCompletionBlock;
@property (copy) CDUnknownBlockType shareAndBaseTokenCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
