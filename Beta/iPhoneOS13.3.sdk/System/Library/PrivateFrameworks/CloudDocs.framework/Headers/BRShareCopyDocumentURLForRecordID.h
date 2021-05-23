/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation

{
    CKRecordID *_recordID;
    _Bool _withServerLookup;
    CDUnknownBlockType _copyDocumentURLCompletionBlock;
}

@property (copy) CDUnknownBlockType copyDocumentURLCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithRecordID:(id)arg1 withServerLookup:(_Bool)arg2;

@end
