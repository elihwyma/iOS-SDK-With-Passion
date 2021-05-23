/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVPlaybackCoordinatorProviding, SVPrefetchPolicyHandler, SVVideoBufferObserverFactory, SVVideoLoadingProgressObserverFactory, SVVideoLoadingStateObserverFactory, SVVideoPlaybackProgressObserverFactory;

@interface SVPrefetcherFactory : NSObject

{
    id <SVVideoBufferObserverFactory> _bufferObserverFactory;
    id <SVPrefetchPolicyHandler> _prefetchPolicyHandler;
    id <SVPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
}

@property (nonatomic, readonly) id <SVVideoBufferObserverFactory> bufferObserverFactory;
@property (nonatomic, readonly) id <SVPrefetchPolicyHandler> prefetchPolicyHandler;
@property (nonatomic, readonly) id <SVPlaybackCoordinatorProviding> playbackCoordinatorProvider;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;
@property (nonatomic, readonly) id <SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playbackCoordinatorProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6;

@end
