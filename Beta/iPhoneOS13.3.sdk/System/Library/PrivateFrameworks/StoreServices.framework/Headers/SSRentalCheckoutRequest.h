/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalCheckoutRequest : SSRequest

{
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
    _Bool _shouldValidateRentalInfo;
    _Bool _checkoutWithPlay;
    unsigned long long _checkoutType;
}

@property (readonly) NSArray *sinfs;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) long long downloadIdentifier;
@property (nonatomic) _Bool shouldValidateRentalInfo;
@property (nonatomic, getter=shouldCheckoutWithPlay) _Bool checkoutWithPlay;
@property unsigned long long checkoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithSinfs:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;

@end
