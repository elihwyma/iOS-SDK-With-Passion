/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredentialMetadata.h>

@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata

{
    NSString *_currencyCode;
}

@property (copy, nonatomic, readonly) NSString *currencyCode;

- (id)initWithConfiguration:(id)arg1;
- (id)displayString;

@end
