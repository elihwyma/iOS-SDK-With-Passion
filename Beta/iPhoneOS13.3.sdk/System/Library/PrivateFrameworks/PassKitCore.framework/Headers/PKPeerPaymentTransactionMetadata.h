/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, NSUUID;

@interface PKPeerPaymentTransactionMetadata : NSObject <Swift>

{
    NSString *_dpanIdentifier;
    NSString *_serviceIdentifier;
    NSUUID *_requestDeviceScoreIdentifier;
    NSUUID *_sendDeviceScoreIdentifier;
}

@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPeerPaymentTransactionMetadata:(id)arg1;

@end
