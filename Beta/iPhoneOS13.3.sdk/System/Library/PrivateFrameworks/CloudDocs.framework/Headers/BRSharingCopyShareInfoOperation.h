/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareInfoOperation : BROperation

{
    NSURL *_fileURL;
    CDUnknownBlockType _copyShareInfoCompletionBlock;
}

@property (copy) CDUnknownBlockType copyShareInfoCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
