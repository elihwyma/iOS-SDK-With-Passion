/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKServiceProviderOrder.h>

@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder

{
    NSString *_sourceAccount;
    NSString *_targetAccount;
    NSString *_dpanIdentifier;
}

@property (copy, nonatomic) NSString *sourceAccount;
@property (copy, nonatomic) NSString *targetAccount;
@property (copy, nonatomic) NSString *dpanIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderData;

@end
