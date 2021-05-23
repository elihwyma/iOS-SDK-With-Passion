/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharePrepFolderForSharing : BROperation

{
    NSURL *_url;
    CDUnknownBlockType _prepFolderSharingCompletionBlock;
}

@property (copy) CDUnknownBlockType prepFolderSharingCompletionBlock;

- (id)initWithURL:(id)arg1;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;

@end
