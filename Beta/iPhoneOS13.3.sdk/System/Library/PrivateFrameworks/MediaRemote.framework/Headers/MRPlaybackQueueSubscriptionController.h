/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MSVMutableBidirectionalDictionary, NSMutableArray, NSMutableSet, _MRNowPlayingPlayerPathProtobuf;

@protocol OS_dispatch_queue;

@interface MRPlaybackQueueSubscriptionController : NSObject

{
    NSMutableArray *_requestFilters;
    NSMutableSet *_requests;
    MSVMutableBidirectionalDictionary *_offsets;
    NSObject<OS_dispatch_queue> *_queue;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (void)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)requestForSubscribedContentItemIdentifier:(struct NSString *)arg1;
- (id)offsetForIdentifier:(id)arg1;
- (void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2;
- (_Bool)hasRequest:(id)arg1;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1;
- (void)_removeRequestID:(id)arg1;
- (void)restoreStateFromController:(id)arg1;
- (void)removeRequest:(id)arg1;
- (id)requestForContentItemIdentifier:(id)arg1;

@end
