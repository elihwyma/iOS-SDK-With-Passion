/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, SSDownloadManager, SUClientInterface;

@protocol OS_dispatch_queue;

@interface SUDownloadManager : NSObject

{
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

@property (nonatomic, readonly) SSDownloadManager *downloadManager;
@property (nonatomic, readonly) NSArray *downloads;

- (void)dealloc;
- (id)initWithDownloadManager:(id)arg1;
- (void)_reloadDownloadManager;
- (void)reloadDownloadManager;
- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;
- (void)preflightWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_removeObject:(id)arg1 fromArray:(id *)arg2;
- (void)_finishPreflightWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)deleteDownload:(id)arg1;
- (id)downloadForDownloadIdentifier:(long long)arg1;

@end
