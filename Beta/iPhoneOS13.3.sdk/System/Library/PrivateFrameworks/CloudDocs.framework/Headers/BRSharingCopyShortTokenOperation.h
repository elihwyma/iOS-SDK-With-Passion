/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShortTokenOperation : BROperation

{
    NSURL *_fileURL;
    CDUnknownBlockType _shortTokenCompletionBlock;
}

@property (copy) CDUnknownBlockType shortTokenCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
