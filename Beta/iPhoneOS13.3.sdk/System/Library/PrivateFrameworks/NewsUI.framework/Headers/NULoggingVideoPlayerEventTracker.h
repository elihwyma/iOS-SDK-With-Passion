/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@interface NULoggingVideoPlayerEventTracker : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)videoDidAppearWithVideoItem:(id)arg1;
- (void)videoDidDisappearWithVideoItem:(id)arg1;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)muteStateChanged:(_Bool)arg1 withVideoItem:(id)arg2 metadata:(id)arg3;
- (void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1;
- (void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id)arg1;
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id)arg1;

@end
