/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareProcessSubitems : BROperation

{
    NSURL *_url;
    CDUnknownBlockType _processSubitemsCompletionBlock;
    unsigned long long _maxSharedSubitemsBeforeFailure;
    unsigned long long _processType;
}

@property (copy) CDUnknownBlockType processSubitemsCompletionBlock;
@property (nonatomic) unsigned long long maxSharedSubitemsBeforeFailure;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 processType:(unsigned long long)arg2;

@end
