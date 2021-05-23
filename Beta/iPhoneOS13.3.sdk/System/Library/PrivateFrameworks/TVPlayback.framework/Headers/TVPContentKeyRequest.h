/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class AVContentKeyRequest, NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, NSURL, TVPContentKeySession;

@interface TVPContentKeyRequest : NSObject

{
    _Bool _isRenewal;
    _Bool _isLowValueKey;
    _Bool _allowManualRenewal;
    _Bool _wantsOfflineKeysIfPossible;
    NSURL *_keyIdentifier;
    unsigned long long _requestID;
    NSString *_eventReportingID;
    long long _type;
    NSDate *_requestStartDate;
    NSDate *_requestEndDate;
    NSData *_keyRequestData;
    NSDictionary *_additionalRequestParams;
    NSDate *_serverRequestStartDate;
    NSArray *_keyFormatVersions;
    NSData *_offlineKeyData;
    NSData *_secureInvalidationNonceData;
    id _context;
    NSData *_keyResponseData;
    NSDate *_renewalDate;
    NSNumber *_renewalInterval;
    NSDate *_expirationDate;
    NSString *_contentID;
    NSNumber *_playbackDuration;
    NSDictionary *_additionalRequestParamsFromResponse;
    NSError *_error;
    AVContentKeyRequest *_avContentKeyRequest;
    TVPContentKeySession *_contentKeySession;
}

@property (retain, nonatomic) NSURL *keyIdentifier;
@property (nonatomic, readonly) AVContentKeyRequest *avContentKeyRequest;
@property (weak, nonatomic) TVPContentKeySession *contentKeySession;
@property (nonatomic) _Bool wantsOfflineKeysIfPossible;
@property (nonatomic) _Bool isRenewal;
@property (nonatomic) long long type;
@property (nonatomic, readonly) unsigned long long requestID;
@property (nonatomic, readonly) NSString *eventReportingID;
@property (nonatomic, readonly) _Bool isCancelled;
@property (retain, nonatomic) NSDate *requestStartDate;
@property (retain, nonatomic) NSDate *requestEndDate;
@property (retain, nonatomic) NSData *keyRequestData;
@property (retain, nonatomic) NSDictionary *additionalRequestParams;
@property (retain, nonatomic) NSDate *serverRequestStartDate;
@property (retain, nonatomic) NSArray *keyFormatVersions;
@property (retain, nonatomic) NSData *offlineKeyData;
@property (retain, nonatomic) NSData *secureInvalidationNonceData;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSData *keyResponseData;
@property (retain, nonatomic) NSDate *renewalDate;
@property (retain, nonatomic) NSNumber *renewalInterval;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *contentID;
@property (nonatomic) _Bool isLowValueKey;
@property (retain, nonatomic) NSNumber *playbackDuration;
@property (nonatomic) _Bool allowManualRenewal;
@property (retain, nonatomic) NSDictionary *additionalRequestParamsFromResponse;
@property (retain, nonatomic) NSError *error;

+ (void)initialize;
+ (id)secureInvalidationRequestForIdentifier:(id)arg1 offlineKeyData:(id)arg2 additionalRequestParams:(id)arg3 contentID:(id)arg4;

- (id)description;
- (void)finish;
- (id)initWithAVContentKeyRequest:(id)arg1;
- (void)makeKeyRequestDataForCertificateData:(id)arg1 assetIDData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)offlineKeyDataFromServerKeyData:(id)arg1 error:(id *)arg2;
- (void)finishByRequestingOfflineKeysIfPossible;

@end
