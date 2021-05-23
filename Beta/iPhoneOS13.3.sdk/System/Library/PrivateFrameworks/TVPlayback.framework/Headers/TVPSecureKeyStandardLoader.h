/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/TVPSecureKeyLoader.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSURL, TVPSecureKeyRequest;

@protocol TVPSecureKeyStandardLoaderConnectionHandling, TVPSecureKeyStandardLoaderRequestGenerating;

@interface TVPSecureKeyStandardLoader : TVPSecureKeyLoader

{
    _Bool _holdKeyResponses;
    _Bool _didSkipRentalCheckout;
    _Bool _includeGUID;
    _Bool _requiresExternalEntitlementCheck;
    id <TVPSecureKeyStandardLoaderRequestGenerating> _requestGenerator;
    id <TVPSecureKeyStandardLoaderConnectionHandling> _connectionHandler;
    NSString *_serviceProviderID;
    NSNumber *_rentalID;
    NSURL *_certificateDataURL;
    NSURL *_keyDataURL;
    TVPSecureKeyRequest *_savedRequestToUseForStopping;
    NSMutableArray *_pendingKeyResponses;
    NSDate *_rentalExpirationDate;
    NSDate *_rentalPlaybackStartDate;
}

@property (retain, nonatomic) NSURL *certificateDataURL;
@property (retain, nonatomic) NSURL *keyDataURL;
@property (retain, nonatomic) TVPSecureKeyRequest *savedRequestToUseForStopping;
@property (retain, nonatomic) NSMutableArray *pendingKeyResponses;
@property (retain, nonatomic) NSDate *rentalExpirationDate;
@property (retain, nonatomic) NSDate *rentalPlaybackStartDate;
@property (retain, nonatomic) id <TVPSecureKeyStandardLoaderRequestGenerating> requestGenerator;
@property (retain, nonatomic) id <TVPSecureKeyStandardLoaderConnectionHandling> connectionHandler;
@property (nonatomic) _Bool holdKeyResponses;
@property (nonatomic) _Bool didSkipRentalCheckout;
@property (nonatomic) _Bool includeGUID;
@property (nonatomic) _Bool requiresExternalEntitlementCheck;
@property (retain, nonatomic) NSString *serviceProviderID;
@property (retain, nonatomic) NSNumber *rentalID;

+ (void)initialize;

- (id)init;
- (void)startLoadingCertificateDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;
- (void)sendStopRequest;
- (id)_assetIdentifierForKeyRequest:(id)arg1;
- (id)_bodyJSONDataForRequest:(id)arg1 forceStop:(_Bool)arg2;
- (id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2;

@end
