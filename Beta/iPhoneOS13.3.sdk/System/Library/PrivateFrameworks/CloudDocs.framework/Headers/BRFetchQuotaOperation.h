/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@interface BRFetchQuotaOperation : BROperation

{
    CDUnknownBlockType _fetchQuotaCompletionBlock;
}

@property (copy) CDUnknownBlockType fetchQuotaCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
