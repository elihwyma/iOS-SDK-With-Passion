/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, SVTimeline;

@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving;

@interface SVTimelineManager : NSObject

{
    SVTimeline *_timeline;
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;
@property (retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithTimeline:(id)arg1 playbackProgressObserverFactory:(id)arg2;

@end
