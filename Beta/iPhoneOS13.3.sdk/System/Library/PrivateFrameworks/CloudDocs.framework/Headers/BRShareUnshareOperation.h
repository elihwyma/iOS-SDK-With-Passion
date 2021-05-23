/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareUnshareOperation : BROperation

{
    CKShare *_share;
    CDUnknownBlockType _unshareCompletionBlock;
}

@property (retain, nonatomic) CKShare *share;
@property (copy) CDUnknownBlockType unshareCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;

@end
