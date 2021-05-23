/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class CKShare, NSError, NSString;

@interface BRShareCopyShareURLOperation : BROperation

{
    CKShare *_share;
    NSString *_appName;
    NSError *_error;
    CDUnknownBlockType _shareCopyURLCompletionBlock;
    CDUnknownBlockType _copyShareURLCompletionBlock;
}

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSString *appName;
@property (copy) CDUnknownBlockType shareCopyURLCompletionBlock;
@property (copy) CDUnknownBlockType copyShareURLCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)_initWithShare:(id)arg1 documentType:(id)arg2;
- (id)initWithFileURL:(id)arg1 documentType:(id)arg2;

@end
