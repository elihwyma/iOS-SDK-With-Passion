/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoPeriodicTimeObserverFactory, SVVideoPlaybackStateObserverFactory, SVVideoTimeJumpObserverFactory, SVVideoTimeProviderFactory;

@interface SVVideoTimePlayedTrackerFactory : NSObject

{
    id <SVVideoPeriodicTimeObserverFactory> _timeObserverFactory;
    id <SVVideoTimeProviderFactory> _timeProviderFactory;
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoTimeJumpObserverFactory> _timeJumpObserverFactory;
}

@property (nonatomic, readonly) id <SVVideoPeriodicTimeObserverFactory> timeObserverFactory;
@property (nonatomic, readonly) id <SVVideoTimeProviderFactory> timeProviderFactory;
@property (nonatomic, readonly) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;
@property (nonatomic, readonly) id <SVVideoTimeJumpObserverFactory> timeJumpObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createTimePlayedTrackerForVideo:(id)arg1;
- (id)initWithTimeObserverFactory:(id)arg1 timeProviderFactory:(id)arg2 playbackStateObserverFactory:(id)arg3 timeJumpObserverFactory:(id)arg4;

@end
