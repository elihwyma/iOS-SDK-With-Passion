/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIPlaybackReporter.h>

@class WLKPlaybackReporter;

@interface VUIPlaybackReporterUTS : VUIPlaybackReporter

{
    WLKPlaybackReporter *_reporter;
}

@property (retain, nonatomic) WLKPlaybackReporter *reporter;

+ (id)sharedInstance;

- (void)_endSession:(id)arg1;
- (_Bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (_Bool)enforceSinglePlaybackSession;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (id)_createSessionForPlayer:(id)arg1;
- (void)_reportForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_reportLinearForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_reportVODForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (long long)_wlkPlaybackStateForState:(id)arg1;
- (id)_wlkPlaybackRateForState:(id)arg1 player:(id)arg2;
- (double)_completionFudgeFactor;
- (void)_reportSummary:(id)arg1 sessionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportForPlayer:(id)arg1 completionState:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
