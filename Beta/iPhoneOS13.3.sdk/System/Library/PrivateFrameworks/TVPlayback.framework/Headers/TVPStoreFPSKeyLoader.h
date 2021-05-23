/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSNumber, NSString, NSURL, TVPPlaybackReportingEventCollection, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyStandardLoader;

@protocol TVPStoreFPSKeyLoaderDelegate;

@interface TVPStoreFPSKeyLoader : NSObject

{
    _Bool _holdKeyResponses;
    _Bool _didSkipRentalCheckout;
    _Bool _includeGUID;
    _Bool _requiresExternalEntitlementCheck;
    NSObject<TVPStoreFPSKeyLoaderDelegate> *_delegate;
    NSError *_error;
    TVPPlaybackReportingEventCollection *_eventCollection;
    NSString *_serviceProviderID;
    NSNumber *_rentalID;
    TVPSecureKeyDeliveryCoordinator *_secureKeyDeliveryCoordinator;
    TVPSecureKeyStandardLoader *_secureKeyStandardLoader;
    NSMutableArray *_pendingKeyRequests;
    TVPSecureKeyStandardLoader *_fpsCertLoader;
    NSURL *_certificateDataURL;
    NSURL *_keyDataURL;
}

@property (retain, nonatomic) TVPSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator;
@property (retain, nonatomic) TVPSecureKeyStandardLoader *secureKeyStandardLoader;
@property (retain, nonatomic) NSMutableArray *pendingKeyRequests;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TVPSecureKeyStandardLoader *fpsCertLoader;
@property (copy, nonatomic) NSURL *certificateDataURL;
@property (copy, nonatomic) NSURL *keyDataURL;
@property (weak, nonatomic) NSObject<TVPStoreFPSKeyLoaderDelegate> *delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (nonatomic) _Bool holdKeyResponses;
@property (nonatomic) _Bool didSkipRentalCheckout;
@property (nonatomic) _Bool includeGUID;
@property (nonatomic) _Bool requiresExternalEntitlementCheck;
@property (retain, nonatomic) NSString *serviceProviderID;
@property (retain, nonatomic) NSNumber *rentalID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)preFetchFPSCertificate;

- (void)sendStopRequest;
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2;
- (void)_preFetchFPSCertificate;
- (void)loadSecureKeyRequest:(id)arg1;
- (void)_failPendingKeyRequestsWithError:(id)arg1;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1;
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg1 forKeyRequest:(id)arg2;
- (void)secureKeyDeliveryCoordinator:(id)arg1 willFailWithError:(id)arg2 forKeyRequest:(id)arg3;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
- (void)secureKeyDeliveryCoordinator:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;

@end
