/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SSDownload, SSDownloadManager, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUIStoreDownloadMonitor : NSObject

{
    SSDownloadManager *_downloadManager;
    SSDownload *_download;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) SSDownloadManager *downloadManager;
@property (retain, nonatomic) SSDownload *download;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)_registerStateMachineHandlers;
- (id)initWithDownload:(id)arg1 downloadManager:(id)arg2;
- (void)waitForDownloadToBecomePlayableWithCompletion:(CDUnknownBlockType)arg1;

@end
