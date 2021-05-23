/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSDownload, SSDownloadAsset, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSDownloadSession : NSObject

{
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _sessionID;
    long long _assetID;
    long long _downloadID;
}

@property (readonly) SSDownload *download;
@property (readonly) SSDownloadAsset *downloadAsset;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (id)_initSSDownloadSession;
- (id)_copySessionPropertyWithKey:(const char *)arg1;

@end
