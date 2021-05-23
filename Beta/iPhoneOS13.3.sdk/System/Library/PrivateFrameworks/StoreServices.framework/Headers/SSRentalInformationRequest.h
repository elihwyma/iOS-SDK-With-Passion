/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSNumber, NSString;

@interface SSRentalInformationRequest : SSRequest

{
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
}

@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

@end
