/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class MPMediaItem, MPMediaQuery;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue

{
    MPMediaQuery *_query;
    MPMediaItem *_firstItem;
    long long _shuffleType;
}

@property (nonatomic, readonly) MPMediaQuery *query;
@property (retain, nonatomic) MPMediaItem *firstItem;
@property (nonatomic) long long shuffleType;

+ (id)queryQueueWithContextID:(id)arg1 query:(id)arg2;

- (id)description;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)arg1 query:(id)arg2;

@end
