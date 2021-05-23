/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSURL;

@protocol CPLFileWatcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CPLFileWatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
    NSURL *_fileURL;
    id <CPLFileWatcherDelegate> _delegate;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (weak, nonatomic) id <CPLFileWatcherDelegate> delegate;

- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)_forceRefreshWatchingNode;
- (void)_startWatchingNode;
- (void)_stopWatchingNode;
- (void)_updateWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingParent;
- (void)startWatching;
- (void)stopWatching;

@end
