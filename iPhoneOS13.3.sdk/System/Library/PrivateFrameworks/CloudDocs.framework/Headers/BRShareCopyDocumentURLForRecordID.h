//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation
{
    CKRecordID *_recordID;
    BOOL _withServerLookup;
    id /* CDUnknownBlockType */ _copyDocumentURLCompletionBlock;
}

@property(copy) id /* CDUnknownBlockType */ copyDocumentURLCompletionBlock; // @synthesize copyDocumentURLCompletionBlock=_copyDocumentURLCompletionBlock;
// - (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithRecordID:(id)arg1 withServerLookup:(BOOL)arg2;

@end

