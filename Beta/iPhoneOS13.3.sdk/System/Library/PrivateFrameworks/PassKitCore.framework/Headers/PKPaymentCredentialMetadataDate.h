/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredentialMetadata.h>

@class NSString;

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

{
    NSString *_displayFormat;
}

@property (copy, nonatomic, readonly) NSString *displayFormat;

- (id)initWithConfiguration:(id)arg1;
- (id)displayString;

@end
