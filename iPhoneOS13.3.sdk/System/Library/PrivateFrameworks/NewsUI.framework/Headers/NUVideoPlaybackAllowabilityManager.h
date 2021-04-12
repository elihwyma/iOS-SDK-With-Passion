//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@protocol SVVideoPlaybackController, SVVideoPlaybackPolicy, SVVisibilityMonitoring;

@interface NUVideoPlaybackAllowabilityManager : NSObject <NUVideoPlayerEventTracker>
{
    id <SVVisibilityMonitoring> _visibilityMonitor;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoPlaybackPolicy> _playbackPolicy;
}

@property(readonly, nonatomic) id <SVVideoPlaybackPolicy> playbackPolicy; // @synthesize playbackPolicy=_playbackPolicy;
@property(readonly, nonatomic) id <SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SVVisibilityMonitoring> visibilityMonitor; // @synthesize visibilityMonitor=_visibilityMonitor;
// - (void).cxx_destruct;
- (void)videoPlayerDidBecomeInvisible;
- (id)initWithPlayerVisibilityMonitor:(id)arg1 playbackController:(id)arg2 playbackPolicy:(id)arg3;
- (id)init;

@end

