/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BREvictItemOperation : BROperation

{
    unsigned long long _section;
    NSURL *_url;
    CDUnknownBlockType _evictionCompletionBlock;
}

@property (copy) CDUnknownBlockType evictionCompletionBlock;

- (id)description;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
