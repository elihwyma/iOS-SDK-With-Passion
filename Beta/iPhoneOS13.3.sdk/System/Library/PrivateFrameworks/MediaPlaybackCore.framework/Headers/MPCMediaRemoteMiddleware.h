/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPCFuture, MPCMediaRemoteController, MPSectionedCollection, NSArray, NSIndexPath, NSString;

@protocol MPCSupportedCommands;

@interface MPCMediaRemoteMiddleware : NSObject <Swift>

{
    _Bool _skippedMetadata;
    NSArray *_invalidationObservers;
    MPCFuture *_controllerFuture;
    MPCMediaRemoteController *_controller;
    MPSectionedCollection *_queueContentItems;
    MPSectionedCollection *_queueModelObjects;
    id <MPCSupportedCommands> _supportedCommands;
    NSIndexPath *_playingIndexPath;
    NSString *_queueIdentifier;
    long long _playerState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool skippedMetadata;
@property (retain, nonatomic) MPCFuture *controllerFuture;
@property (retain, nonatomic) MPCMediaRemoteController *controller;
@property (retain, nonatomic) MPSectionedCollection *queueContentItems;
@property (retain, nonatomic) MPSectionedCollection *queueModelObjects;
@property (retain, nonatomic) id <MPCSupportedCommands> supportedCommands;
@property (copy, nonatomic) NSIndexPath *playingIndexPath;
@property (copy, nonatomic) NSString *queueIdentifier;
@property (nonatomic) long long playerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)init;
- (id)_stateDumpObject;
- (id)operationsForRequest:(id)arg1;
- (id)controller:(id)arg1 chain:(id)arg2;
- (long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(id)arg2;
- (long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(id)arg3;
- (id)sessionPlayerPath:(id)arg1 atIndex:(long long)arg2 chain:(id)arg3;
- (id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerState:(long long)arg1 chain:(id)arg2;
- (id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2;
- (long long)playerRepeatType:(long long)arg1 chain:(id)arg2;
- (long long)playerShuffleType:(long long)arg1 chain:(id)arg2;
- (long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2;
- (long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2;
- (unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2;
- (unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3;
- (CDStruct_fce57115)playerItemDuration:(CDStruct_fce57115)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (_Bool)playerItemIsPlaceholder:(_Bool)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2;
- (long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2;
- (long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2;
- (id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3;
- (_Bool)playerCommandSupported:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (_Bool)playerCommandEnabled:(_Bool)arg1 command:(unsigned int)arg2 chain:(id)arg3;
- (id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned int)arg3 chain:(id)arg4;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForSessionRequest:(id)arg1;
- (id)_supportedCommands:(unsigned int)arg1 infoValueForKey:(id)arg2;
- (float)_playbackRateForContentItem:(id)arg1;

@end
