/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIISMediaItem : TVPBaseMediaItem

{
    _Bool _disableScrubbing;
    NSURL *_url;
    NSURL *_tokenServerURL;
    NSURL *_stopServerURL;
    NSDictionary *_tokenServerParameters;
    NSString *_assetIDForStopping;
    long long _state;
    NSData *_certificateData;
    NSMutableArray *_requestsAwaitingCertFetch;
    unsigned long long _loadingContext;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *tokenServerURL;
@property (retain, nonatomic) NSURL *stopServerURL;
@property (retain, nonatomic) NSDictionary *tokenServerParameters;
@property (retain, nonatomic) NSString *assetIDForStopping;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch;
@property (nonatomic) unsigned long long loadingContext;
@property (nonatomic) _Bool disableScrubbing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)mediaItemURL;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1;
- (void)cleanUpMediaItem;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 tokenServerURL:(id)arg2 stopServerURL:(id)arg3 tokenServerParameters:(id)arg4;
- (void)_userPlaybackSettingsDidChange:(id)arg1;
- (void)_sendStopForAssetID:(id)arg1;
- (id)_assetIDForKeyRequest:(id)arg1;
- (id)_certificateURLForKeyRequest:(id)arg1;
- (void)_startKeyRequests:(id)arg1 token:(id)arg2;
- (void)_loadCertificateDataFromURL:(id)arg1 loadingContext:(unsigned long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchTokenForAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_parseCertificateURL:(id *)arg1 keyServerURL:(id *)arg2 assetID:(id *)arg3 fromKeyRequest:(id)arg4;
- (_Bool)_allowedToRetryRequestForError:(id)arg1 response:(id)arg2;
- (double)_randomRetryDelayForFailedAttemptNumber:(unsigned long long)arg1;
- (void)_sendKeyRequestsToServer:(id)arg1 token:(id)arg2;
- (id)_assetIDDataForKeyRequest:(id)arg1;
- (id)_linearServiceRequestForURL:(id)arg1 assetID:(id)arg2;
- (id)_keyServerURLForKeyRequest:(id)arg1;
- (void)_sendURLRequestToServer:(id)arg1 forKeyRequest:(id)arg2 attemptNumber:(unsigned long long)arg3;

@end
