/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperation.h>

@class AVAssetResourceLoadingRequest, NSData, NSDictionary, NSNumber, NSObject, NSURL;

@protocol OS_dispatch_queue, SSVSecureKeyDeliveryRequestOperationDelegate;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSURL *_certificateURL;
    NSURL *_keyServerURL;
    AVAssetResourceLoadingRequest *_resourceLoadingRequest;
    CDUnknownBlockType _responseBlock;
    _Bool _iTunesStoreRequest;
    _Bool _shouldIncludeGUID;
    NSDictionary *_URLBagDictionary;
    NSData *_persistentContentKeyContext;
    NSData *_serverPlaybackContextData;
    _Bool _skippedRentalCheckout;
    _Bool _offline;
    NSNumber *_rentalId;
    long long _leaseAction;
    double _expirationTime;
    double _playbackStartTime;
    id <SSVSecureKeyDeliveryRequestOperationDelegate> _serverPlaybackContextDataDelegate;
}

@property (copy, nonatomic, readonly) NSData *persistentContentKeyContext;
@property (nonatomic) long long leaseAction;
@property _Bool offline;
@property (nonatomic, readonly) double expirationTime;
@property (nonatomic, readonly) double playbackStartTime;
@property (weak, nonatomic) id <SSVSecureKeyDeliveryRequestOperationDelegate> serverPlaybackContextDataDelegate;
@property (retain, nonatomic) NSData *serverPlaybackContextData;
@property (retain) NSURL *certificateURL;
@property (retain) NSURL *keyServerURL;
@property (retain) AVAssetResourceLoadingRequest *resourceLoadingRequest;
@property (copy) NSNumber *rentalId;
@property _Bool skippedRentalCheckout;
@property (getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property (nonatomic) _Bool shouldIncludeGUID;
@property (copy) CDUnknownBlockType responseBlock;

- (id)init;
- (void)start;
- (void)main;
- (void)_sendResponseBlockWithError:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1;
- (id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 renewAfter:(double *)arg3 error:(id *)arg4;
- (double)_expirationTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2;
- (double)_playbackStartTimeForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2;
- (void)setPersistentContentKeyContext:(id)arg1;
- (double)_timeIntervalForStreamingKeyID:(long long)arg1 responseKey:(id)arg2 streamingKeyDictionaries:(id)arg3;

@end
