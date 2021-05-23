/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCJinglePlayActivityReportingController, MPCReportingPlaybackObserver, NSString;

@interface MPCLyricsReportingController : NSObject

{
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;
}

@property (retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController;
@property (retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)recordLyricsViewEvent:(id)arg1;

@end
