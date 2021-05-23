/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, NSTimer, NSURL, WBSCoalescedAsynchronousWriter, _SFDownloadIconCache;

@protocol _SFDownloadDelegate;

@interface _SFDownloadManager : NSObject

{
    NSMutableArray *_downloads;
    NSURL *_downloadHistoryURL;
    WBSCoalescedAsynchronousWriter *_historyWriter;
    _Bool _loadedDownloadHistory;
    CDUnknownBlockType _blockToExecuteWhenDownloadHistoryIsLoaded;
    NSMapTable *_downloadsToDeferAdding;
    NSTimer *_removeDownloadsTimer;
    NSTimer *_updateTotalProgressTimer;
    NSURL *_downloadsRootURL;
    id <_SFDownloadDelegate> _extraDownloadDelegate;
    _SFDownloadIconCache *_iconCache;
    double _totalProgress;
}

@property (nonatomic, readonly) NSURL *downloadsRootURL;
@property (weak, nonatomic) id <_SFDownloadDelegate> extraDownloadDelegate;
@property (copy, nonatomic, readonly) NSArray *downloads;
@property (nonatomic, readonly) _SFDownloadIconCache *iconCache;
@property (nonatomic, readonly) double totalProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)defaultDownloadsHistoryURL;
+ (id)downloadRepresentationsAtURL:(id)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)downloadDidFinish:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)downloadDidFail:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (_Bool)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
- (void)downloadDidImportFileToDownloadsFolder:(id)arg1;
- (void)downloadDidReceiveResponse:(id)arg1;
- (void)downloadDidResume:(id)arg1;
- (void)createDirectoryForDownload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)downloadContentsDidChange:(id)arg1;
- (void)downloadWillBeDeleted:(id)arg1;
- (void)removeDownloads:(id)arg1;
- (id)_dataForPersistingToHistory;
- (void)_loadDownloadHistory;
- (id)initAsReadonly:(_Bool)arg1;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (void)getDownloadsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_busyDownloads;
- (void)_removeDeletedDownloads;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)_noteDownloadsChanged;
- (_Bool)shouldExcludeDownloadFromFileSystem:(id)arg1;
- (void)_updateTotalProgress:(id)arg1;
- (double)_calculateTotalProgress;
- (void)_addDownload:(id)arg1;
- (id)_containerDirectoryForDownload:(id)arg1;
- (void)removeDownloadsStartedAfterDate:(id)arg1;
- (void)deferAddingDownloadWhenStarted:(id)arg1;

@end
