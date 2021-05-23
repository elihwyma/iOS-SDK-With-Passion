/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSURL, TVPContentKeyRequest, TVPContentKeySession, TVPPlaybackReportingEventCollection;

@protocol VUIStoreFPSKeyLoaderDelegate;

@interface VUIStoreFPSKeyLoader : NSObject

{
    _Bool _didSkipRentalCheckout;
    _Bool _hasLoadedAnyStreamingKeyRequests;
    _Bool _usesKeyIdentifierPenaltyBox;
    NSURL *_secureInvalidationNonceURL;
    NSNumber *_secureInvalidationDSID;
    NSObject<VUIStoreFPSKeyLoaderDelegate> *_delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSNumber *_rentalID;
    NSURL *_certificateURL;
    NSURL *_keyServerURL;
    long long _state;
    NSData *_certificateData;
    NSMutableArray *_requestsAwaitingCertFetch;
    TVPContentKeyRequest *_savedRequestToUseForStopping;
    NSDate *_keyExpirationDate;
    NSDate *_rentalPlaybackStartDate;
    TVPContentKeySession *_contentKeySession;
    NSMutableDictionary *_keyIdentifierPenaltyBox;
}

@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *certificateData;
@property (retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch;
@property (retain, nonatomic) TVPContentKeyRequest *savedRequestToUseForStopping;
@property (retain, nonatomic) NSDate *keyExpirationDate;
@property (retain, nonatomic) NSDate *rentalPlaybackStartDate;
@property (nonatomic) _Bool hasLoadedAnyStreamingKeyRequests;
@property (retain, nonatomic) TVPContentKeySession *contentKeySession;
@property (retain, nonatomic) NSMutableDictionary *keyIdentifierPenaltyBox;
@property (retain, nonatomic) NSURL *secureInvalidationNonceURL;
@property (retain, nonatomic) NSNumber *secureInvalidationDSID;
@property (weak, nonatomic) NSObject<VUIStoreFPSKeyLoaderDelegate> *delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (retain, nonatomic) NSNumber *rentalID;
@property (nonatomic) _Bool didSkipRentalCheckout;
@property (nonatomic) _Bool usesKeyIdentifierPenaltyBox;

+ (void)initialize;
+ (void)preFetchFPSCertificate;
+ (void)_loadAndCacheCertificateDataForValidURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_loadFPSURLsFromStoreBagWithCompletion:(CDUnknownBlockType)arg1;

- (void)sendStopRequest;
- (void)loadFairPlayStreamingKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startKeyRequestsInBatches:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_failKeyRequests:(id)arg1 withError:(id)arg2;
- (void)_loadCertificateDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateValidKeyRequestsInBatches:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendKeyRequestsToServer:(id)arg1 isStopRequest:(_Bool)arg2 isSecureInvalidationRequest:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_generateSecureInvalidationDataForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadNonceDataForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generateSecureInvalidationDataForFirstRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generateKeyRequestDataForKeyRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_bodyJSONDataForRequests:(id)arg1 isStopRequest:(_Bool)arg2;
- (void)_handleResponseForKeyRequests:(id)arg1 responseData:(id)arg2 URLResponse:(id)arg3 error:(id)arg4;
- (void)_handleResponseDicts:(id)arg1 forKeyRequests:(id)arg2;
- (void)_handleResponseDict:(id)arg1 forKeyRequest:(id)arg2;
- (id)_errorForStoreResponseStatus:(long long)arg1 deviceLimit:(id)arg2;
- (id)_jsonDictionaryForRequest:(id)arg1 isStopRequest:(_Bool)arg2;
- (id)initWithCertificateURL:(id)arg1 keyServerURL:(id)arg2;
- (void)invalidateKeysWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllEntriesFromKeyIdentifierPenaltyBox;

@end
