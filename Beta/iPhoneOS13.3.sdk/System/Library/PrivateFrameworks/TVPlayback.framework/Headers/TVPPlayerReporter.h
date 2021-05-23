/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSString, RTCReporting, TVPPlayer;

__attribute__((visibility("hidden")))
@interface TVPPlayerReporter : NSObject

{
    TVPPlayer *_player;
    RTCReporting *_rtcAgent;
    NSString *_optFlag;
    double _timeWatched;
    double _timeWatchedStart;
    id _reportingHierarchyToken;
}

@property (weak, nonatomic) TVPPlayer *player;
@property (retain) RTCReporting *rtcAgent;
@property (retain) NSString *optFlag;
@property double timeWatched;
@property double timeWatchedStart;
@property (retain, nonatomic) id reportingHierarchyToken;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_playerCurrentMediaItemDidChange:(id)arg1;
- (void)_setupRTCAgent;
- (void)_sendPlaybackStartupEventsIfNecessary;
- (void)_tearDownRTCAgent;
- (void)_sendSessionSummaryIfNecessary;
- (id)_rtcAgentUserInfo;
- (void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (id)_gatherSessionSummary;
- (void)sendPlaybackStartupMetricsManually;

@end
