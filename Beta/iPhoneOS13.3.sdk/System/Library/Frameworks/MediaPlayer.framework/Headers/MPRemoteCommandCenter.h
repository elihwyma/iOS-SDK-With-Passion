/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAdvanceRepeatModeCommand, MPAdvanceShuffleModeCommand, MPChangePlaybackPositionCommand, MPChangePlaybackProgressCommand, MPChangePlaybackRateCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPInsertIntoPlaybackQueueCommand, MPMRNowPlayingPlayerPathWrapper, MPRatingCommand, MPRemoteCommand, MPReorderQueueCommand, MPSetPlaybackQueueCommand, MPSetPlaybackSessionCommand, MPSkipIntervalCommand, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface MPRemoteCommandCenter : NSObject

{
    NSMutableArray *_activeCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    void *_mediaRemoteCommandHandler;
    _Bool _scheduledSupportedCommandsChangedNotification;
    _Bool _canBeNowPlayingApplication;
    _Bool _handlingPlaybackQueueCommands;
    MPMRNowPlayingPlayerPathWrapper *_playerPath;
    _Bool _disableAutomaticCanBeNowPlaying;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    MPRemoteCommand *_enableLanguageOptionCommand;
    MPRemoteCommand *_disableLanguageOptionCommand;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRatingCommand *_ratingCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPFeedbackCommand *_likeCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_bookmarkCommand;
    MPChangePlaybackPositionCommand *_changePlaybackPositionCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPAdvanceShuffleModeCommand *_advanceShuffleModeCommand;
    MPAdvanceRepeatModeCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPSetPlaybackQueueCommand *_setPlaybackQueueCommand;
    MPRemoteCommand *_prepareForSetPlaybackQueueCommand;
    MPInsertIntoPlaybackQueueCommand *_insertIntoPlaybackQueueCommand;
    MPRemoteCommand *_removeFromPlaybackQueueCommand;
    MPReorderQueueCommand *_reorderQueueCommand;
    MPRemoteCommand *_playItemInQueueCommand;
    MPFeedbackCommand *_addNowPlayingItemToLibraryCommand;
    MPFeedbackCommand *_addItemToLibraryCommand;
    MPChangePlaybackProgressCommand *_changePlaybackProgressCommand;
    MPSetPlaybackSessionCommand *_setPlaybackSessionCommand;
    MPRemoteCommand *_reshuffleCommand;
    NSString *_playerID;
}

@property (nonatomic, readonly) MPRemoteCommand *specialSeekForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *specialSeekBackwardCommand;
@property (nonatomic, readonly) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand;
@property (nonatomic, readonly) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand;
@property (nonatomic, readonly) MPRemoteCommand *removeFromPlaybackQueueCommand;
@property (nonatomic, readonly) MPReorderQueueCommand *reorderQueueCommand;
@property (nonatomic, readonly) MPRemoteCommand *playItemInQueueCommand;
@property (nonatomic, readonly) MPRemoteCommand *createRadioStationCommand;
@property (nonatomic, readonly) MPSetPlaybackQueueCommand *setPlaybackQueueCommand;
@property (nonatomic, readonly) MPRemoteCommand *prepareForSetPlaybackQueueCommand;
@property (nonatomic, readonly) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand;
@property (nonatomic, readonly) MPFeedbackCommand *addNowPlayingItemToLibraryCommand;
@property (nonatomic, readonly) MPFeedbackCommand *addItemToLibraryCommand;
@property (nonatomic, readonly) MPChangePlaybackProgressCommand *changePlaybackProgressCommand;
@property (nonatomic, readonly) MPSetPlaybackSessionCommand *setPlaybackSessionCommand;
@property (nonatomic, readonly) MPRemoteCommand *reshuffleCommand;
@property (copy, nonatomic, readonly) NSString *playerID;
@property (nonatomic) _Bool disableAutomaticCanBeNowPlaying;
@property (nonatomic, readonly) MPRemoteCommand *pauseCommand;
@property (nonatomic, readonly) MPRemoteCommand *playCommand;
@property (nonatomic, readonly) MPRemoteCommand *stopCommand;
@property (nonatomic, readonly) MPRemoteCommand *togglePlayPauseCommand;
@property (nonatomic, readonly) MPRemoteCommand *enableLanguageOptionCommand;
@property (nonatomic, readonly) MPRemoteCommand *disableLanguageOptionCommand;
@property (nonatomic, readonly) MPChangePlaybackRateCommand *changePlaybackRateCommand;
@property (nonatomic, readonly) MPChangeRepeatModeCommand *changeRepeatModeCommand;
@property (nonatomic, readonly) MPChangeShuffleModeCommand *changeShuffleModeCommand;
@property (nonatomic, readonly) MPRemoteCommand *nextTrackCommand;
@property (nonatomic, readonly) MPRemoteCommand *previousTrackCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipForwardCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipBackwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekBackwardCommand;
@property (nonatomic, readonly) MPChangePlaybackPositionCommand *changePlaybackPositionCommand;
@property (nonatomic, readonly) MPRatingCommand *ratingCommand;
@property (nonatomic, readonly) MPFeedbackCommand *likeCommand;
@property (nonatomic, readonly) MPFeedbackCommand *dislikeCommand;
@property (nonatomic, readonly) MPFeedbackCommand *bookmarkCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCommandCenter;
+ (void)getPendingCommandTypesWithCompletion:(CDUnknownBlockType)arg1;
+ (long long)_numberOfCommandCentersWithTargets;
+ (id)commandCenterForPlayerID:(id)arg1;
+ (void)updateLaunchCommandsWithConfigurationHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)initWithPlayerID:(id)arg1;
- (void)_scheduleSupportedCommandsChanged;
- (void)_startMediaRemoteSync;
- (void)_stopMediaRemoteSync;
- (id)_activeCommands;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dispatchCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPendingCommandTypesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (void)_commandTargetsDidChangeNotification:(id)arg1;

@end
