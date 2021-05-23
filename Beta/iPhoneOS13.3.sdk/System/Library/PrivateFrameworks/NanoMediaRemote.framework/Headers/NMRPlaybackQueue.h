/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NMRMediaRemoteUpdater, NMROrigin, NSData, NSDictionary, _NMRPlaybackQueue;

@protocol NMRPlaybackQueueDelegate, OS_dispatch_queue;

@interface NMRPlaybackQueue : NSObject

{
    _NMRPlaybackQueue *_upNextPlaybackQueue;
    _Bool _observingMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NMRMediaRemoteUpdater *_playbackQueueUpdater;
    NSDictionary *_nowPlayingInfo;
    id <NMRPlaybackQueueDelegate> _delegate;
    NMROrigin *_origin;
    CDStruct_627e0f85 _observedRange;
}

@property (retain, nonatomic) NMROrigin *origin;
@property (weak, nonatomic) id <NMRPlaybackQueueDelegate> delegate;
@property (nonatomic) CDStruct_627e0f85 observedRange;
@property (nonatomic, readonly) NSData *fullPlaybackQueueData;

- (id)init;
- (void)dealloc;
- (id)_itemWithIdentifier:(id)arg1;
- (void)updateWithData:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (id)_contentItemIdentifiers;
- (void)_refreshCurrentPlaybackQueueFromMediaRemoteWithCompletion:(CDUnknownBlockType)arg1;
- (void *)_mediaRemotePlaybackQueueWithRange:(CDStruct_627e0f85)arg1 includeMetadata:(_Bool)arg2;
- (id)_metadataForItemWithIdentifier:(id)arg1;
- (void)_updateWithMediaRemoteQueue:(void *)arg1;
- (_Bool)_needsMetadataForMediaRemoteItem:(void *)arg1;
- (void)beginObservingMediaRemotePlaybackQueueForOrigin:(id)arg1;
- (void *)copyFullMediaRemotePlaybackQueueIncludingMetadata:(_Bool)arg1;
- (void *)copyMediaRemotePlaybackQueueWithRange:(CDStruct_627e0f85)arg1 includeMetadata:(_Bool)arg2;
- (id)deltaPlaybackQueueDataFromPreviousData:(id)arg1 invalidatedMetadataIdentifiers:(id)arg2;
- (void)_updateMetadataWithMediaRemoteItems:(id)arg1;
- (CDStruct_627e0f85)_rangeOfItemsNeedingMetadataForMediaRemoteQueue:(void *)arg1;
- (_Bool)_needsUpdateForMediaRemoteQueue:(void *)arg1;

@end
