/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSString, NSURL;

@interface PKPaymentProvisioningResponse

{
    _Bool _willProvisionWithAuthenticationDisabled;
    NSURL *_passURL;
    NSArray *_moreInfoURLs;
    NSString *_ownershipToken;
    NSString *_ownershipTokenIdentifier;
}

@property (copy, nonatomic) NSURL *passURL;
@property (copy, nonatomic, readonly) NSArray *moreInfoURLs;
@property (nonatomic, readonly) _Bool willProvisionWithAuthenticationDisabled;
@property (copy, nonatomic, readonly) NSString *ownershipToken;
@property (copy, nonatomic, readonly) NSString *ownershipTokenIdentifier;

- (id)initWithData:(id)arg1;

@end
