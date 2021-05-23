/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue, NSArray, NSNumber, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent

{
    NSArray *_supportedInsertionPositions;
    long long _insertionPosition;
    MPRemotePlaybackQueue *_playbackQueue;
    NSNumber *_privateListeningOverride;
    NSString *_insertAfterContentItemID;
    long long _destinationOffset;
}

@property (copy, nonatomic) NSArray *supportedInsertionPositions;
@property (nonatomic, readonly) long long insertionPosition;
@property (nonatomic, readonly) MPRemotePlaybackQueue *playbackQueue;
@property (nonatomic, readonly) NSNumber *privateListeningOverride;
@property (nonatomic, readonly) NSString *insertAfterContentItemID;
@property (nonatomic, readonly) long long destinationOffset;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3;

@end
