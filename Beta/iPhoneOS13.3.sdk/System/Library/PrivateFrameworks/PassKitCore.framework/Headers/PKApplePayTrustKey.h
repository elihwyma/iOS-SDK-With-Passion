/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustKey : NSObject <Swift>

{
    NSString *_identifier;
    NSData *_signedEnrollmentData;
    NSData *_publicKeyHash;
    NSData *_certificate;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSData *signedEnrollmentData;
@property (copy, nonatomic, readonly) NSData *publicKeyHash;
@property (copy, nonatomic, readonly) NSData *certificate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;

@end
