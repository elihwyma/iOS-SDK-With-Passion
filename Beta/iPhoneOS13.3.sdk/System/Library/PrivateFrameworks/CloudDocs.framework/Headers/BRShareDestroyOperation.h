/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation

{
    CKShare *_share;
    CDUnknownBlockType _shareDestroyCompletionBlock;
}

@property (retain, nonatomic) CKShare *share;
@property (copy) CDUnknownBlockType shareDestroyCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;

@end
