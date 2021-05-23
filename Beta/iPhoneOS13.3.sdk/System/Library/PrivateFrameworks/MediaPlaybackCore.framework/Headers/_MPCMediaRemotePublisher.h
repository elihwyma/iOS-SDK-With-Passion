/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlaybackEngine, MPCPlayerPath, MPLibraryAddStatusObserver, MPNowPlayingInfoCenter, MPRemoteCommandCenter, NSArray, NSString, NSUserDefaults;

@interface _MPCMediaRemotePublisher : NSObject

{
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;
    NSString *_lastContextID;
    NSArray *_accounts;
    _Bool _activeAccountAllowsSubscriptionPlayback;
    NSString *_activeAccountStoreFrontIdentifier;
    NSUserDefaults *_ipodDefaults;
    _Bool _initializedSupportedCommands;
    _Bool _engineRestoringState;
    MPCPlaybackEngine *_playbackEngine;
    MPNowPlayingInfoCenter *_infoCenter;
    MPRemoteCommandCenter *_commandCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=hasInitializedSupportedCommands) _Bool initializedSupportedCommands;
@property (nonatomic, getter=isEngineRestoringState) _Bool engineRestoringState;
@property (nonatomic, readonly) MPRemoteCommandCenter *commandCenter;
@property (nonatomic, readonly) MPCPlayerPath *playerPath;
@property (weak, nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) MPNowPlayingInfoCenter *infoCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (void)becomeActive;
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)_exportableSessionTypes;
- (id)_supportedSessionTypes;
- (void)_likedStateChangedNotification:(id)arg1;
- (void)_updateLaunchCommands;
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateSupportedCommands;
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_becomeActiveIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_playbackStateIsIdle:(long long)arg1;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 didChangeAccounts:(id)arg2;
- (void)engineWillBeginStateRestoration:(id)arg1;
- (void)engineDidEndStateRestoration:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)publishIfNeeded;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)getShouldRestoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;
- (void)_disableQueueModificationsChangedNotification:(id)arg1;

@end
