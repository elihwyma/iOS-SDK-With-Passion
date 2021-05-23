/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCAccountSession, BRCNotificationPipe, NSString, NSURL, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCEvictItemOperation : _BRCFrameworkOperation

{
    BRCAccountSession *_session;
    unsigned long long _section;
    NSURL *_url;
    brc_task_tracker *_tracker;
    BRCNotificationPipe *_pipe;
    _Bool _isFinished;
    CDUnknownBlockType _evictionCompletionBlock;
}

@property (copy) CDUnknownBlockType evictionCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)invalidate;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 url:(id)arg2;

@end
