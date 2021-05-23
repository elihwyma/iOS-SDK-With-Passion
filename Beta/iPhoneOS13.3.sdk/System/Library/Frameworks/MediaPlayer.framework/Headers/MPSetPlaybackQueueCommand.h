/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSMutableDictionary, NSMutableSet, NSObject;

@protocol OS_dispatch_queue;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand

{
    NSMutableDictionary *_registeredSpecializedQueues;
    NSMutableSet *_registeredQueueTypes;
    NSMutableSet *_registeredCustomQueueIdentifiers;
    _Bool _supportsSharedQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _upNextItemCount;
}

@property (nonatomic) long long upNextItemCount;

- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)unregisterSpecializedQueueIdentifier:(id)arg1;
- (void)registerSupportedQueueType:(long long)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)setSupportedSharedQueue:(_Bool)arg1;

@end
