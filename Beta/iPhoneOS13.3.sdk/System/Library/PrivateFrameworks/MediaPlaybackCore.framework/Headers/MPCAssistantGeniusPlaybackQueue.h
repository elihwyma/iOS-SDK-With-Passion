/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue

{
    NSURL *_seedTrack;
}

@property (nonatomic, readonly) NSURL *seedTrack;

+ (id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2;

- (id)description;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)arg1 seedTrack:(id)arg2;

@end
