/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustSignatureRequest : NSObject <Swift>

{
    NSString *_keyIdentifier;
    NSData *_nonce;
    NSData *_manifestHash;
}

@property (copy, nonatomic, readonly) NSString *keyIdentifier;
@property (copy, nonatomic, readonly) NSData *nonce;
@property (copy, nonatomic, readonly) NSData *manifestHash;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3;

@end
