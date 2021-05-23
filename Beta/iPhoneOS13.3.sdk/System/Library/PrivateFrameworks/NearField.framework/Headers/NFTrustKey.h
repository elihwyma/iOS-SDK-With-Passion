/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFTrustObject.h>

@class NSArray, NSData, NSNumber, NSString;

@interface NFTrustKey : NFTrustObject

{
    NSString *_identifier;
    NSString *_keyAttestationAuthority;
    NSString *_keyAttestation;
    NSNumber *_counterLimit;
    NSNumber *_counterValue;
    NSArray *_localValidations;
    NSData *_publicKey;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSNumber *counterLimit;
@property (retain, nonatomic) NSNumber *counterValue;
@property (retain, nonatomic) NSArray *localValidations;
@property (retain, nonatomic) NSString *keyAttestationAuthority;
@property (retain, nonatomic) NSString *keyAttestation;

+ (_Bool)supportsSecureCoding;
+ (id)keyWithIdentifier:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
