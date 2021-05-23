/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSArray, NSNumber;

@interface SSRentalCheckinRequest : SSRequest

{
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property (readonly) NSArray *sinfs;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;

- (id)init;
- (void)dealloc;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithSinfs:(id)arg1;

@end
