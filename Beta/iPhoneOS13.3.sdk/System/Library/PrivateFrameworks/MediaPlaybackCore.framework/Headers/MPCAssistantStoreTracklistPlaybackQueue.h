/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class MPIdentifierSet, NSArray;

@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue

{
    NSArray *_storeItemIDs;
    long long _shuffleType;
    MPIdentifierSet *_collectionIdentifierSet;
}

@property (nonatomic, readonly) NSArray *storeItemIDs;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) MPIdentifierSet *collectionIdentifierSet;

+ (id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3;

- (id)description;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3;

@end
