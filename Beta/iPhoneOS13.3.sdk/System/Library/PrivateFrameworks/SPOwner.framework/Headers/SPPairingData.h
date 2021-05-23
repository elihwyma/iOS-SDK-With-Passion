/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSUUID;

@interface SPPairingData : NSObject

{
    NSUUID *_identifier;
    NSData *_sharedSecret;
    NSData *_publicKey;
    NSArray *_roles;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *sharedSecret;
@property (copy, nonatomic) NSData *publicKey;
@property (copy, nonatomic, readonly) NSArray *roles;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sharedSecret:(id)arg2 publicKey:(id)arg3;

@end
