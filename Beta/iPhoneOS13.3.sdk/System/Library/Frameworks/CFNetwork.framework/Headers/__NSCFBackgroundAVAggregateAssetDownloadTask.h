/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURLSession;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask

{
    _Bool _sentWillDownloadToURL;
    _Bool _sentWillBeginDelayedRequest;
    unsigned long long _AVAssetDownloadToken;
    AVURLAsset *_URLAsset;
    NSArray *_mediaSelections;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    NSString *_childAssetDownloadTasksSessionIdentifier;
    NSURLSession *_childAssetDownloadSession;
    NSArray *_childAssetDownloadTasks;
}

@property unsigned long long AVAssetDownloadToken;
@property (retain) AVURLAsset *URLAsset;
@property (retain) NSArray *mediaSelections;
@property (copy) NSString *assetTitle;
@property (copy) NSData *assetArtworkData;
@property (copy) NSDictionary *options;
@property (readonly) NSString *childAssetDownloadTasksSessionIdentifier;
@property (readonly) NSURLSession *childAssetDownloadSession;
@property (readonly) NSArray *childAssetDownloadTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)childSessionConfigurationWithClientConfiguration:(id)arg1 identifier:(id)arg2;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)response;
- (id)originalRequest;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)currentRequest;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_resume;
- (id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 mediaSelections:(id)arg3 assetTitle:(id)arg4 assetArtworkData:(id)arg5 options:(id)arg6 ident:(unsigned long long)arg7;
- (_Bool)_isAVAssetTask;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;
- (void)_onqueue_childTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_onqueue_childTask:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_childTask:(id)arg1 willDownloadToURL:(id)arg2;
- (void)_onqueue_childTask:(id)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;

@end
