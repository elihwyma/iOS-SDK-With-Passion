/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustKeyRequest : NSObject <Swift>

{
    NSString *_keyIdentifier;
    NSData *_subjectIdentifier;
}

@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSData *subjectIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 subjectIdentifier:(id)arg2;

@end
