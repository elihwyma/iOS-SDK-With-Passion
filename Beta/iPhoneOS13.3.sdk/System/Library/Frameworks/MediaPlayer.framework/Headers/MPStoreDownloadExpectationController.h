/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreDownloadExpectationController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_source> *_dispatchSource;
    unsigned long long _downloadManagerMonitorCount;
    CDUnknownBlockType _searchBlock;
    double _timeout;
}

@property (copy, nonatomic) CDUnknownBlockType searchBlock;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)_attemptDownloadSearch;
- (void)_finishWithDownload:(id)arg1 error:(id)arg2;
- (void)_beginMonitoringDownloadManager;
- (void)_endMonitoringDownloadManager;

@end
