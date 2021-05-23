/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLNetworkState, NSString;

@protocol CPLNetworkWatcherDelegate, OS_dispatch_queue, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
    NSString *_endPoint;
    CPLNetworkState *_networkState;
    id <CPLNetworkWatcherDelegate> _delegate;
}

@property (nonatomic, readonly) NSString *endPoint;
@property (nonatomic, readonly) CPLNetworkState *networkState;
@property (weak, nonatomic) id <CPLNetworkWatcherDelegate> delegate;

- (void)stop;
- (void)start;
- (id)initWithQueue:(id)arg1;

@end
