//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackEventTrackerFactory-Protocol.h>

@protocol SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory;

@interface SVVideoPlaybackEventTrackerFactory : NSObject <SVVideoPlaybackEventTrackerFactory>
{
    id <SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property(readonly, nonatomic) id <SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
// - (void).cxx_destruct;
- (id)createEventTrackerForVideo:(id)arg1;
- (id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2;

@end
