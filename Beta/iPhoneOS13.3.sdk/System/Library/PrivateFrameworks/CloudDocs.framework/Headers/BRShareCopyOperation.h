/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyOperation : BROperation

{
    NSURL *_url;
    CDUnknownBlockType _shareCopyCompletionBlock;
    CDUnknownBlockType _rootShareCopyCompletionBlock;
}

@property (retain, nonatomic) NSURL *url;
@property (copy) CDUnknownBlockType shareCopyCompletionBlock;
@property (copy) CDUnknownBlockType rootShareCopyCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
