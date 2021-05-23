/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPNetworkObserver : NSObject

{
    int _musicCellularNetworkingAllowedNotifyToken;
    int _videosPreferencesChangedToken;
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _videosAllowsCellularStreaming;
}

@property (nonatomic, readonly) _Bool isUsingNetwork;
@property (nonatomic, getter=isMusicCellularStreamingAllowed) _Bool musicCellularStreamingAllowed;
@property (nonatomic, getter=isVideoCellularStreamingAllowed) _Bool videoCellularStreamingAllowed;
@property (nonatomic, getter=isMusicCellularDownloadingAllowed) _Bool musicCellularDownloadingAllowed;
@property (nonatomic, readonly, getter=isStoreCellularNetworkingAllowed) _Bool storeCellularNetworkingAllowed;

+ (id)sharedNetworkObserver;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)beginUsingNetwork;
- (void)endUsingNetwork;

@end
