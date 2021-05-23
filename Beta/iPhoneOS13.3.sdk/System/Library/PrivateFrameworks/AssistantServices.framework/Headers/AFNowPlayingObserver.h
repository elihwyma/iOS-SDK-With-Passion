/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface AFNowPlayingObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    long long _playbackState;
    NSHashTable *_listeners;
    _Bool _isObserving;
}

@property (nonatomic, readonly) long long playbackState;

+ (id)defaultObserver;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)_startObservingNowPlayingAppPlaybackState;
- (void)_fetchNowPlayingAppPlaybackState;
- (void)_stopObservingNowPlayingAppPlaybackState;
- (void)nowPlayingApplicationPlaybackStateChanged:(id)arg1;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1;
- (void)getPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;

@end
