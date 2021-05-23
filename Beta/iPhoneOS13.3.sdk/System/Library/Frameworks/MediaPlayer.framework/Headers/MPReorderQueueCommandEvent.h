/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent

{
    NSString *_insertAfterContextItemID;
    long long _destinationOffset;
}

@property (nonatomic, readonly) NSString *insertAfterContextItemID;
@property (nonatomic, readonly) long long destinationOffset;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
