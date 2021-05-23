/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving, SVVideoQueueObserving, SVVideoQueueProviding, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoViewControllerProviding;

@interface SVSkipToPreviousButtonManager : NSObject

{
    NSMutableSet *_controls;
    id <SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVVideoSkipLockObserving> _skipLockObserver;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property (nonatomic, readonly) NSMutableSet *controls;
@property (nonatomic, readonly) id <SVVideoSkipLockObserverFactory> skipLockObserverFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (nonatomic, readonly) id <SVVideoQueueObserving> queueObserver;
@property (retain, nonatomic) id <SVVideoSkipLockObserving> skipLockObserver;
@property (retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)conditionsChanged;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)addControl:(id)arg1;
- (id)initWithSkipLockObserverFactory:(id)arg1 playbackProgressObserverFactory:(id)arg2 videoViewControllerProvider:(id)arg3 queueProvider:(id)arg4 queueObserver:(id)arg5;

@end
