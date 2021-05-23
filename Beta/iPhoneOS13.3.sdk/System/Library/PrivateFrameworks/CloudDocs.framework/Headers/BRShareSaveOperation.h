/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation

{
    CKShare *_share;
    CDUnknownBlockType _shareSaveCompletionBlock;
}

@property (retain, nonatomic) CKShare *share;
@property (copy) CDUnknownBlockType shareSaveCompletionBlock;

+ (_Bool)shouldRetryShareSaveOnError:(id)arg1;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;

@end
