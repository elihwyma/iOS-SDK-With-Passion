/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/Swift-Protocol.h>

@class NSArray, NSDate, NSObject, NSString, TVPAudioOption, TVPChapter, TVPChapterCollection, TVPDateRange, TVPInterstitial, TVPPlaybackState, TVPPlaylist, TVPSubtitleOption, TVPTimeRange;

@protocol TVPASyncPlaybackDelegate, TVPMediaItem, TVPPlaybackDelegate;

@protocol TVPPlayback <Swift>

@property (nonatomic, readonly) NSString *name;
@property (weak, nonatomic) id <TVPPlaybackDelegate> delegate;
@property (weak, nonatomic) id <TVPASyncPlaybackDelegate> asyncDelegate;
@property (retain, nonatomic) TVPPlaylist *playlist;
@property (retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem;
@property (nonatomic, readonly) _Bool currentMediaItemPreparedForLoading;
@property (nonatomic, readonly) _Bool currentMediaItemInitialLoadingComplete;
@property (nonatomic, readonly) _Bool currentMediaItemHasVideoContent;
@property (nonatomic, readonly) _Bool currentMediaItemIsStreaming;
@property (nonatomic, readonly) struct CGSize currentMediaItemPresentationSize;
@property (nonatomic, readonly) _Bool currentMediaItemHasDates;
@property (nonatomic, readonly) TVPPlaybackState *state;
@property (nonatomic) long long errorBehavior;
@property (nonatomic) _Bool interactive;
@property (nonatomic, readonly) double rate;
@property (nonatomic) double rateUsedForPlayback;
@property (nonatomic) _Bool waitsAfterPreparingMediaItems;
@property (nonatomic, readonly) double elapsedTime;
@property (copy, nonatomic) NSDate *playbackDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _Bool isLive;
@property (nonatomic) _Bool muted;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSArray *chapterCollections;
@property (retain, nonatomic) TVPChapterCollection *currentChapterCollection;
@property (nonatomic, readonly) TVPChapter *currentChapter;
@property (nonatomic, readonly) TVPInterstitial *currentInterstitial;
@property (nonatomic, readonly) TVPTimeRange *bufferedTimeRange;
@property (nonatomic, readonly) TVPTimeRange *seekableTimeRange;
@property (nonatomic, readonly) TVPDateRange *seekableDateRange;
@property (nonatomic, readonly) double forwardPlaybackEndTime;
@property (nonatomic, readonly) double reversePlaybackEndTime;
@property (nonatomic) long long mediaItemEndAction;
@property (nonatomic, readonly) NSArray *audioOptions;
@property (retain, nonatomic) TVPAudioOption *selectedAudioOption;
@property (nonatomic, readonly) NSArray *subtitleOptions;
@property (retain, nonatomic) TVPSubtitleOption *selectedSubtitleOption;
@property (nonatomic) double maximumBitRate;
@property (nonatomic) _Bool preventsSleepDuringVideoPlayback;
@property (nonatomic) _Bool updatesMediaRemoteInfoAutomatically;
@property (nonatomic) _Bool limitReadAhead;

- (unsigned short)init;
- (unsigned short)invalidate;
- (unsigned short)initWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)pause;
- (unsigned short)stop;
- (unsigned short)play;
- (unsigned short)setElapsedTime: /* Error: Ran out of types for this method. */;
- (unsigned short)togglePlayPause;
- (unsigned short)scanWithRate: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBoundaryTimeObserverWithToken: /* Error: Ran out of types for this method. */;
- (unsigned short)addBoundaryTimeObserverForTimes:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSubtitleOptions;
- (unsigned short)changeMediaInDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)changeMediaInDirection:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)continueLoadingCurrentItem;
- (unsigned short)playIgnoringDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseIgnoringDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseWithVolumeRampDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)stopWithVolumeRampDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)setElapsedTime:precise: /* Error: Ran out of types for this method. */;
- (unsigned short)setElapsedTime:seekPrecision: /* Error: Ran out of types for this method. */;
- (unsigned short)setElapsedTime:seekPrecision:ignoreDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)addElapsedTimeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeElapsedTimeObserverWithToken: /* Error: Ran out of types for this method. */;
- (unsigned short)addBoundaryTimeObserverForDates:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)skipToNextChapterInDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectedSubtitleOption:setGlobalPreference: /* Error: Ran out of types for this method. */;
- (unsigned short)currentMediaItemSupportsScrubbingUsingPlayer;

@end
