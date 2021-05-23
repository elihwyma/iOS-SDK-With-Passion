/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDCoordinator, FPDownloadInfo, NSObject;

@protocol OS_dispatch_queue;

@interface FPDDownloadOperation : FPDActionOperation

{
    NSObject<OS_dispatch_queue> *_queue;
    FPDCoordinator *_coordinator;
}

@property (nonatomic, readonly) FPDownloadInfo *info;

+ (_Bool)_validateInfo:(id)arg1;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (void)sendPastUpdatesToClient:(id)arg1;
- (id)downloadInfo;
- (void)_setupCreatedItemForRoot:(id)arg1;
- (void)_finishedDownloadingLocator:(id)arg1 withError:(id)arg2;

@end
