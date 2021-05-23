/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory;

@interface SVVideoPlaybackEventTrackerFactory : NSObject

{
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property (nonatomic, readonly) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createEventTrackerForVideo:(id)arg1;
- (id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2;

@end
