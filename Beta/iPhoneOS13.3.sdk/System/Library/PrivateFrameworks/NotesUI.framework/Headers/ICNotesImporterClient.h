/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ICNotesImporterClient : NSObject

{
    NSXPCConnection *_connectionToService;
    NSObject<OS_dispatch_queue> *_requestCountQueue;
    unsigned long long _requestCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue;
@property (nonatomic) unsigned long long requestCount;

- (id)init;
- (void)resumeConnectionIfNeeded;
- (void)suspendConnectionIfNeeded;
- (void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseTitleFromHTMLString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cleanupArchiveId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
