/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PLPhotoLibrary;

@protocol OS_dispatch_queue;

@interface PLAssetsdCPLResourceDownloader : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}

- (void)handleInvalidation;
- (id)initWithPhotoLibrary:(id)arg1 trustedCallerBundleID:(id)arg2 clientConnection:(id)arg3;
- (void)_handleInvalidation;
- (id)startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(_Bool)arg3 highPriority:(_Bool)arg4 track:(_Bool)arg5 notify:(_Bool)arg6 transient:(_Bool)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id *)arg10;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCPLDownloadTasks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2;

@end
