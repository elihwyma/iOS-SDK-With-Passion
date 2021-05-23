/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSArray, NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand

{
    _Bool _supportsCreateStation;
    NSArray *_devices;
    NSSet *_supportedInsertionPositions;
    NSSet *_supportedQueueTypes;
    NSSet *_supportedCustomDataQueueIdentifiers;
}

@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) _Bool supportsCreateStation;
@property (retain, nonatomic) NSSet *supportedInsertionPositions;
@property (retain, nonatomic) NSSet *supportedQueueTypes;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;
- (id)_createRadioStationCommandRequest;
- (id)_insertWithOptions:(id)arg1;
- (_Bool)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(_Bool)arg2 atInsertionPosition:(int)arg3;

@end
