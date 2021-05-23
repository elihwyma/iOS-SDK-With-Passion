/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDActionOperationQueue, FPDMoveReader, FPDMoveWriter, FPMoveInfo;

@interface FPDMoveOperation : FPDActionOperation

{
    FPDMoveReader *_reader;
    FPDMoveWriter *_writer;
    FPDActionOperationQueue *_queue;
}

@property (nonatomic, readonly) FPMoveInfo *info;

+ (_Bool)_validateInfo:(id)arg1;

- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)dumpStateTo:(id)arg1;
- (void)_t_unblockReader;
- (void)cancelRoot:(id)arg1;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (id)moveInfo;
- (void)sendPastUpdatesToClient:(id)arg1;

@end
