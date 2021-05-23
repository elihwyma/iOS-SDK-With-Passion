/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BROperation

{
    NSURL *_fileURL;
    _Bool _allowAccess;
    CDUnknownBlockType _allowAccessCompletionBlock;
    CDUnknownBlockType _accessAllowedCompletionBlock;
}

@property (copy) CDUnknownBlockType allowAccessCompletionBlock;
@property (copy) CDUnknownBlockType accessAllowedCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 allowAccess:(_Bool)arg2;

@end
