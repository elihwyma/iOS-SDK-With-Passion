/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCAccountSession, BRCDirectoryItem, BRCTreeEnumerator, BRCXPCClient, NSError, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation

{
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    NSMutableSet *_trackedDocIDs;
    NSSet *_docIDsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    _Bool _isStillEnumeratingDirectory;
    _Bool _isFinished;
    _Bool _isMonitoringReachability;
    NSMutableSet *_appLibrariesMonitored;
    _Bool _isRecursive;
    _Bool _isForBackup;
    _Bool _wantsCurrentVersion;
}

@property (nonatomic) _Bool isRecursive;
@property (nonatomic) _Bool isForBackup;
@property (nonatomic) _Bool wantsCurrentVersion;
@property (nonatomic, readonly) NSSet *trackedDocIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)networkReachabilityChanged:(_Bool)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)downloadTrackedForItemWithDocID:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithDirectoryItem:(id)arg1;
- (void)addCompletionCallback:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3;
- (void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2;
- (void)_finishAfterWaitingForDocumentsWithID:(id)arg1 error:(id)arg2;
- (void)_provideDocument:(id)arg1;
- (void)_provideDirectoryRecursively:(id)arg1;
- (void)_provideURL;
- (void)_provideItem;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4;

@end
