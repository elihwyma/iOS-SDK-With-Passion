//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUVideoMetadata;
@protocol NUVideoItem;

@protocol NUVideoEventTracker <NSObject>

@optional
- (void)userEngagedWithAdvanceButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithReplayButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithNowPlayingButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id <NUVideoItem>)arg1;
- (void)userEngagedWithCallToActionBarWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoPlaybackPassedThirdQuartileWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoPlaybackPassedSecondQuartileWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoPlaybackPassedFirstQuartileWithVideoItem:(id <NUVideoItem>)arg1;
- (void)muteStateChanged:(BOOL)arg1 withVideoItem:(id <NUVideoItem>)arg2 metadata:(NUVideoMetadata *)arg3;
- (void)playbackFailedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackFinishedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackResumedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackPausedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackStartedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)playbackInitiatedWithVideoItem:(id <NUVideoItem>)arg1 metadata:(NUVideoMetadata *)arg2;
- (void)videoDidDisappearWithVideoItem:(id <NUVideoItem>)arg1;
- (void)videoDidAppearWithVideoItem:(id <NUVideoItem>)arg1;
@end

