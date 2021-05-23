/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation

{
    CKShare *_share;
    NSString *_appName;
    CDUnknownBlockType _shareCopyURLCompletionBlock;
}

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSString *appName;
@property (copy) CDUnknownBlockType shareCopyURLCompletionBlock;

+ (id)iWorkShareableExtensions;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 appName:(id)arg2;

@end
