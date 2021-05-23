/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSDownloadManagerAppShim.h>

@protocol SSBookDownloadQueue;

__attribute__((visibility("hidden")))
@interface SSDownloadManagerBookShim : SSDownloadManagerAppShim

{
    id <SSBookDownloadQueue> _downloadQueue;
}

- (void)resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithManagerOptions:(id)arg1;
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)restartDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)__book_downloadsForStati:(id)arg1 overrideFinished:(_Bool)arg2 overrideFailed:(_Bool)arg3;
- (void)__book_sendDownloadsChanged:(id)arg1 filterBooks:(_Bool)arg2;
- (void)__book_cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)__book_dispatchBlock:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)__book_filterDownloads:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)__book_resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;
- (id)__book_getAllDownloads;
- (void)__book_pauseDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_pauseDownloads:(id)arg1 forced:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendDownloadsChanged:(id)arg1;
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
- (id)bookDownloads;

@end
