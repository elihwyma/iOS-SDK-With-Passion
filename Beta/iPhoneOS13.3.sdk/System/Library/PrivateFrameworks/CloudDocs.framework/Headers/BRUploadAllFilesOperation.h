/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class BRContainer;

@interface BRUploadAllFilesOperation : BROperation

{
    CDUnknownBlockType _uploadAllFilesCompletion;
    BRContainer *_container;
}

@property (copy) CDUnknownBlockType uploadAllFilesCompletion;

- (id)init;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithContainer:(id)arg1;

@end
