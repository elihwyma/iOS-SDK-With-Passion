/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationResult : NSObject <Swift>

{
    long long _status;
    NSArray *_errors;
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;
}

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *errors;

+ (_Bool)supportsSecureCoding;
+ (id)sanitizedErrors:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2;

@end
