/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVPlaybackCoordinator;

@protocol SVVideoBufferObserving, SVVideoLoadingProgressObserving, SVVideoLoadingStateObserving, SVVideoPlaybackProgressObserving;

@interface SVPrefetcher : NSObject

{
    unsigned long long _prefetchPolicy;
    SVPlaybackCoordinator *_playbackCoordinator;
    id <SVVideoBufferObserving> _bufferObserver;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    id <SVVideoLoadingProgressObserving> _loadingProgressObserver;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property (nonatomic, readonly) unsigned long long prefetchPolicy;
@property (nonatomic, readonly) SVPlaybackCoordinator *playbackCoordinator;
@property (nonatomic, readonly) id <SVVideoBufferObserving> bufferObserver;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (nonatomic, readonly) id <SVVideoLoadingProgressObserving> loadingProgressObserver;
@property (nonatomic, readonly) id <SVVideoPlaybackProgressObserving> playbackProgressObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPrefetchPolicy:(unsigned long long)arg1 playbackCoordinator:(id)arg2 bufferObserver:(id)arg3 loadingStateObserver:(id)arg4 loadingProgressObserver:(id)arg5 playbackProgressObserver:(id)arg6;
- (void)prefetchingConditionsChanged;

@end
