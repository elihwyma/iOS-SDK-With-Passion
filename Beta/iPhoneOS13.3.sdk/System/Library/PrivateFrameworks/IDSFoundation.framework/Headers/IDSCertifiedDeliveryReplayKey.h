/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSData;

@interface IDSCertifiedDeliveryReplayKey : NSObject <Swift>

{
    NSData *_payloadHash;
}

@property (retain, nonatomic) NSData *payloadHash;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHash:(id)arg1;
- (_Bool)isEqualToReplayKey:(id)arg1;
- (id)initWithPayload:(id)arg1 legacyIdentity:(id)arg2;

@end
