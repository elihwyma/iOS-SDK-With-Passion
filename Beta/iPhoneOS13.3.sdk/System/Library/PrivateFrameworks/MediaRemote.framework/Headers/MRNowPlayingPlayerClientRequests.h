/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRPlaybackQueueSubscriptionController, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueProtobuf;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerClientRequests : NSObject

{
    _MRPlaybackQueueProtobuf *_playbackQueue;
    unsigned int _playbackState;
    NSArray *_supportedCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NSMutableDictionary *_playbackQueueCompletions;
    NSMutableArray *_supportedCommandsCompletions;
    NSMutableArray *_playbackStateCompletions;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableDictionary *_transactions;
    NSOperationQueue *_enquedNowPlayingInfoRequests;
    NSOperationQueue *_enquedNowPlayingInfoAssetRequests;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
}

@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic) unsigned int playbackState;
@property (copy, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (retain, nonatomic) NSArray *supportedCommands;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithPlayerPath:(id)arg1;
- (void)handlePlaybackStateRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleSupportedCommandsRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)restoreNowPlayingClientState;
- (void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2;
- (void)addPlaybackQueueCompletion:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (void)removePlaybackQueueCompletionForRequest:(id)arg1;
- (void)enqueuePlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateContentItems:(id)arg1;
- (void)updateContentItemArtwork:(id)arg1;
- (void)_registerDefaultCallbacks;
- (void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePlaybackQueue:(id)arg1;
- (id)_transactionDestintationForName:(unsigned long long)arg1;
- (void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)transactionCallbacksForName:(unsigned long long)arg1;
- (void)addTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;

@end
