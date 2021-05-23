/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCAppLibrary, BRCServerItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCPCSChainingOperation : _BRCOperation

{
    BRCAppLibrary *_appLibrary;
    BRCServerItem *_rootItem;
    _Bool _completed;
    unsigned long long _batchSize;
    _Bool _shouldFillBatch;
    CDUnknownBlockType _pcsChainCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType pcsChainCompletionBlock;
@property (nonatomic) _Bool shouldFillBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithRootItem:(id)arg1 appLibrary:(id)arg2;
- (void)_sendRecordBatch:(id)arg1 recursed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendRecordBatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_buildRecordListWithCompletion:(CDUnknownBlockType)arg1;

@end
