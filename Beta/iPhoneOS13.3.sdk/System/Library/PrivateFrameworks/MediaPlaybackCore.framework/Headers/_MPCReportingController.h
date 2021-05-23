/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPAssistantAnalyticsReportingController, MPCJinglePlayActivityReportingController, MPCLyricsReportingController, MPCPlaybackEngine, MPCPlaybackHistoryController, MPCReportingPlaybackObserver, MPRTCReportingController, NSString;

@interface _MPCReportingController : NSObject

{
    MPCPlaybackEngine *_playbackEngine;
    MPAssistantAnalyticsReportingController *_assistantAnalyticsController;
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;
    MPRTCReportingController *_rtcReportingController;
    MPCPlaybackHistoryController *_playbackHistoryController;
    MPCLyricsReportingController *_lyricsReportingController;
}

@property (retain, nonatomic) MPAssistantAnalyticsReportingController *assistantAnalyticsController;
@property (retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (retain, nonatomic) MPRTCReportingController *rtcReportingController;
@property (retain, nonatomic) MPCPlaybackHistoryController *playbackHistoryController;
@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController;
@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)recordLyricsViewEvent:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2;

@end
