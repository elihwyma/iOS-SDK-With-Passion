/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/TVPResourceLoadingRequest.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest

{
    _Bool _retrievesOfflineKeys;
    unsigned long long _requestID;
    NSData *_certificateData;
    NSData *_contentIdentifierData;
    NSData *_keyRequestData;
    NSDate *_startDate;
    NSNumber *_rentalID;
    NSDictionary *_requestOptions;
    unsigned long long _retryCount;
    NSString *_reportingID;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSNumber *_requestCompletionTime;
    NSDate *_requestEndDate;
    NSDate *_requestStartDate;
}

@property (copy, nonatomic) NSData *keyRequestData;
@property (copy, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSData *contentIdentifierData;
@property (copy, nonatomic) NSDictionary *requestOptions;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long retryCount;
@property (copy, nonatomic) NSNumber *rentalID;
@property (nonatomic, readonly) NSString *reportingID;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (retain, nonatomic) NSNumber *requestCompletionTime;
@property (copy, nonatomic) NSDate *requestEndDate;
@property (copy, nonatomic) NSDate *requestStartDate;
@property (nonatomic, readonly) unsigned long long requestID;
@property (nonatomic, readonly) _Bool isRenewal;
@property (nonatomic, readonly) _Bool offlineKeyUsageAllowed;
@property (nonatomic) _Bool retrievesOfflineKeys;

- (id)initWithAssetResourceLoadingRequest:(id)arg1;
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;
- (void)loadKeyRequestDataAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)offlineKeyDataForResponseData:(id)arg1 error:(id *)arg2;
- (_Bool)loadKeyRequestDataWithError:(id *)arg1;

@end
