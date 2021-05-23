/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class AVAggregateAssetDownloadTask, NSError, NSMapTable, NSPointerArray, NSProgress, NSString, TVPDownloadSession, TVPMediaItemLoader, TVPReportingSession, TVPStateMachine;

@protocol TVPMediaItem;

@interface TVPDownload : NSObject

{
    _Bool _performKeyFetchOnly;
    _Bool _downloadIsComplete;
    NSObject<TVPMediaItem> *_mediaItem;
    long long _state;
    NSError *_error;
    TVPStateMachine *_stateMachine;
    TVPMediaItemLoader *_mediaItemLoader;
    TVPDownloadSession *_downloadSession;
    AVAggregateAssetDownloadTask *_downloadTask;
    NSPointerArray *_delegates;
    NSProgress *_downloadProgress;
    NSMapTable *_mediaSelectionToProgressMap;
    unsigned long long _downloadInitiationBackgroundTask;
    unsigned long long _downloadTerminationBackgroundTask;
    TVPReportingSession *_reportingSession;
    unsigned long long _numMediaSelectionsThatWillReceiveDownloadProgress;
    unsigned long long _numMediaSelectionsCompleted;
}

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (weak, nonatomic) TVPDownloadSession *downloadSession;
@property (retain, nonatomic) AVAggregateAssetDownloadTask *downloadTask;
@property (nonatomic) _Bool downloadIsComplete;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (retain, nonatomic) NSMapTable *mediaSelectionToProgressMap;
@property (nonatomic) unsigned long long downloadInitiationBackgroundTask;
@property (nonatomic) unsigned long long downloadTerminationBackgroundTask;
@property (retain, nonatomic) TVPReportingSession *reportingSession;
@property (nonatomic) unsigned long long numMediaSelectionsThatWillReceiveDownloadProgress;
@property (nonatomic) unsigned long long numMediaSelectionsCompleted;
@property (nonatomic, readonly) double progress;
@property (nonatomic) _Bool performKeyFetchOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)pause;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_5c5366e1)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_5c5366e1)arg5 forMediaSelection:(id)arg6;
- (id)descriptionForState:(long long)arg1;
- (void)_registerStateMachineHandlers;
- (void)_mediaItemLoaderStateDidChangeTo:(id)arg1;
- (id)initWithMediaItem:(id)arg1 downloadSession:(id)arg2 existingDownloadTask:(id)arg3;

@end
