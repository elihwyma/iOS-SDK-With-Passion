/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray, NSMutableSet, NSObject;

@protocol OS_dispatch_queue;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand

{
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    _Bool _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_supportedInsertionPositions;
}

@property (copy, nonatomic) NSArray *supportedInsertionPositions;

- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)registerSupportedQueueType:(long long)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)setSupportedSharedQueue:(_Bool)arg1;

@end
