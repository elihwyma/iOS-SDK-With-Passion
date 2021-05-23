/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation

{
    NSURL *_url;
    CDUnknownBlockType _shareCopyAccessTokenCompletionBlock;
}

@property (retain, nonatomic) NSURL *url;
@property (copy) CDUnknownBlockType shareCopyAccessTokenCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
