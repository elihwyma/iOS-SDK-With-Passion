/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CRKHostResourcesConfiguration, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSNetService, NSString;

@protocol CRKHostResourcesOperationDelegate;

@interface CRKHostResourcesOperation : CATOperation

{
    CRKHostResourcesConfiguration *mConfiguration;
    NSDictionary *mFileURLsByFilePath;
    NSMutableDictionary *mStartedDownloadCountByFileURL;
    NSMutableDictionary *mFinishedDownloadCountByFileURL;
    NSNetService *mNetService;
    NSMutableSet *mConnections;
    _Bool mPublished;
    NSMutableSet *mConnectionCloseTimers;
    NSError *mStashedError;
    NSMutableDictionary *mZipOperationsByDirectoryURL;
    id <CRKHostResourcesOperationDelegate> _delegate;
}

@property (weak, nonatomic) id <CRKHostResourcesOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)run;
- (void)cancel;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isAsynchronous;
- (id)initWithConfiguration:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netServiceDidPublish:(id)arg1;
- (void)connectionDidClose:(id)arg1;
- (void)operationDidFinish;
- (void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2;
- (void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (void)IPAddressDidChange;
- (void)delegateResourcesDidPublish;
- (id)hostingSocketOptions;
- (_Bool)downloadAllowedForFileURL:(id)arg1;
- (void)delegateDownloadStarted:(id)arg1 fileURL:(id)arg2;
- (void)incrementStartedDownloadCountForFileURL:(id)arg1;
- (void)serveItemAtURL:(id)arg1 toConnection:(id)arg2 forRequestURL:(id)arg3 originalItemURL:(id)arg4;
- (void)zipDirectoryAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)zipOperationDidFail:(id)arg1 directoryURL:(id)arg2;
- (void)delegateDownloadFinished:(id)arg1 fileURL:(id)arg2 error:(id)arg3;
- (void)incrementFinishedDownloadCountForFileURL:(id)arg1;
- (void)connectionCloseDidTimeout:(id)arg1;
- (_Bool)allDownloadsFinished;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 port:(unsigned short)arg5;

@end
