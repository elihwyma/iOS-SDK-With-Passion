/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICRequestContext, NSString, NSURL;

@interface ICSecureKeyDeliveryRequest : NSObject <Swift>

{
    _Bool _skippedRentalCheckout;
    _Bool _ITunesStoreRequest;
    _Bool _shouldIncludeDeviceGUID;
    NSURL *_certificateURL;
    NSString *_contentURI;
    NSURL *_keyServerURL;
    long long _leaseActionType;
    ICRequestContext *_requestContext;
    long long _rentalID;
    long long _qualityOfService;
    CDUnknownBlockType _serverPlaybackContextDataCreationHandler;
}

@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSString *contentURI;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic) long long leaseActionType;
@property (copy, nonatomic) ICRequestContext *requestContext;
@property (nonatomic) long long rentalID;
@property (nonatomic) _Bool skippedRentalCheckout;
@property (nonatomic, getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) CDUnknownBlockType serverPlaybackContextDataCreationHandler;
@property (nonatomic) _Bool shouldIncludeDeviceGUID;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)configureUsingAssetResourceLoadingRequest:(id)arg1;

@end
