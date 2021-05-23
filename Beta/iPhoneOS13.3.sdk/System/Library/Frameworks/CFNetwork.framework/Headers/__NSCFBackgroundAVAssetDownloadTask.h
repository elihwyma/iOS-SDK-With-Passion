/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class AVMediaSelection, AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURL;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask

{
    unsigned long long _downloadToken;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSURL *_temporaryDestinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    AVURLAsset *_URLAsset;
    NSDictionary *_options;
    NSArray *_loadedTimeRanges;
    AVMediaSelection *_resolvedMediaSelection;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (copy) NSURL *destinationURL;
@property (copy) NSURL *temporaryDestinationURL;
@property (copy) NSString *assetTitle;
@property (copy) NSData *assetArtworkData;
@property (retain) AVURLAsset *URLAsset;
@property (copy) NSDictionary *options;
@property (copy) NSArray *loadedTimeRanges;
@property (copy) AVMediaSelection *resolvedMediaSelection;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)response;
- (id)originalRequest;
- (id)currentRequest;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willDownloadToURL:(id)arg1;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1;
- (void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3;
- (void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)_onqueue_didFinishDownloadingToURL:(id)arg1;
- (id)initWithTaskGroup:(id)arg1 URLAsset:(id)arg2 URL:(id)arg3 destinationURL:(id)arg4 temporaryDestinationURL:(id)arg5 assetTitle:(id)arg6 assetArtworkData:(id)arg7 ident:(unsigned long long)arg8;
- (_Bool)_isAVAssetTask;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;

@end
