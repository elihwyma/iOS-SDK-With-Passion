/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableSet, NSString, TVPPlaybackReportingEventCollection, TVPSecureKeyLoader;

@protocol TVPSecureKeyDeliveryCoordinatorDelegate;

@interface TVPSecureKeyDeliveryCoordinator : NSObject

{
    _Bool _certFetchInProgress;
    NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *_delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
    TVPSecureKeyLoader *_secureKeyLoader;
    NSData *_certificateData;
    NSMutableSet *_requestsAwaitingCertFetch;
}

@property (retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader;
@property (retain, nonatomic) NSData *certificateData;
@property (nonatomic) _Bool certFetchInProgress;
@property (retain, nonatomic) NSMutableSet *requestsAwaitingCertFetch;
@property (weak, nonatomic) NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate;
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)isSecureKeyDeliveryRequest:(id)arg1;

- (id)init;
- (void)sendStopRequest;
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (void)loadSecureKeyRequest:(id)arg1;
- (id)initWithSecureKeyLoader:(id)arg1;
- (void)_loadSecureKeyRequest:(id)arg1 sendStartReportingEvent:(_Bool)arg2;
- (void)_finishLoadingWithError:(id)arg1 forRequest:(id)arg2;

@end
