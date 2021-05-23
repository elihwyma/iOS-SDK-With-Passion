/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentSetupConfiguration : NSObject <Swift>

{
    NSString *_referrerIdentifier;
    NSURL *_originatingURL;
    NSString *_merchantIdentifier;
    NSArray *_signedFields;
    NSString *_signature;
}

@property (retain, nonatomic) NSURL *originatingURL;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSArray *signedFields;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *referrerIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
