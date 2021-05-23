/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

#import <FileProviderDaemon/Swift-Protocol.h>

@class FPDDomain, NSMutableDictionary, NSObservation, NSProgress;

@protocol OS_dispatch_queue;

@interface FPDDownloader : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_parentToChildMap;
    NSMutableDictionary *_childProxies;
    NSObservation *_observation;
    FPDDomain *_domain;
    NSProgress *_cancellationProgress;
    NSProgress *_progress;
}

@property (weak, nonatomic, readonly) FPDDomain *domain;
@property (nonatomic, readonly) NSProgress *cancellationProgress;
@property (nonatomic, readonly) NSProgress *progress;

- (void)dealloc;
- (void)cancel;
- (void)_cleanup;
- (void)_stopTrackingFileURLs;
- (void)_createChildItem:(id)arg1;
- (void)downloadItem:(id)arg1 recursively:(_Bool)arg2 request:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_didDownloadItem:(id)arg1 withError:(id)arg2;
- (void)_recursiveDownloadOfItem:(id)arg1 request:(id)arg2 perItemCompletion:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_nonRecursiveDownloadOfItem:(id)arg1 request:(id)arg2 perItemCompletion:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_logRootProgress;
- (void)_progressComputationPreflightForRecursiveRoot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDomain:(id)arg1 callbackQueue:(id)arg2;
- (void)downloadURL:(id)arg1 recursively:(_Bool)arg2 request:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
