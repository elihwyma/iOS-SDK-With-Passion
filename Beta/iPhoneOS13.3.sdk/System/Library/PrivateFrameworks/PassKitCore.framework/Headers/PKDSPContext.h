/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKDSPContext : NSObject <Swift>

{
    NSString *_secureElementID;
    NSString *_serverEndpointIdentifier;
    NSString *_cardholderName;
    NSString *_phoneNumber;
    NSString *_peerPaymentRecipientAddress;
    unsigned long long _eventFrequency;
    NSString *_primaryAppleAccountFirstName;
    NSString *_primaryAppleAccountLastName;
}

@property (copy, nonatomic) NSString *primaryAppleAccountFirstName;
@property (copy, nonatomic) NSString *primaryAppleAccountLastName;
@property (copy, nonatomic) NSString *secureElementID;
@property (copy, nonatomic) NSString *serverEndpointIdentifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *peerPaymentRecipientAddress;
@property (nonatomic) unsigned long long eventFrequency;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;

@end
