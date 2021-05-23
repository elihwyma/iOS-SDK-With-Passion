/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, NSURLSessionDataTask, RMSControlInterface, RMSDAAPRequestManager, RMSNowPlayingInfo;

@protocol OS_dispatch_source, RMSDAAPNowPlayingManagerDelegate;

__attribute__((visibility("hidden")))
@interface RMSDAAPNowPlayingManager : NSObject

{
    RMSDAAPRequestManager *_requestManager;
    RMSNowPlayingInfo *_currentNowPlayingInfo;
    RMSControlInterface *_controlInterface;
    NSURLSessionDataTask *_nowPlayingInfoRequest;
    NSURLSessionDataTask *_artworkRequest;
    NSURLSessionDataTask *_audioRoutesRequest;
    NSURLSessionDataTask *_volumeRequest;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    long long _requestBackoffInterval;
    long long _artworkRequestBackoffInterval;
    NSString *_currentArtworkIdentifier;
    NSArray *_currentAudioRoutes;
    NSNumber *_lastVolume;
    _Bool _isObserving;
    _Bool _observing;
    id <RMSDAAPNowPlayingManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <RMSDAAPNowPlayingManagerDelegate> delegate;
@property (retain, nonatomic) RMSControlInterface *controlInterface;
@property (nonatomic, readonly, getter=isObserving) _Bool observing;

- (id)initWithRequestManager:(id)arg1;
- (void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg1;
- (void)_requestAudioRoutes;
- (void)_requestVolume;
- (void)_refreshNowPlayingInfoRequest;
- (void)_requestNowPlayingInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancelArtworkRetryTimer;
- (void)beginObservingNowPlaying;
- (void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg1 delay:(double)arg2;
- (_Bool)_audioRoutes:(id)arg1 equalAudioRoutes:(id)arg2;
- (void)endObservingNowPlaying;

@end
