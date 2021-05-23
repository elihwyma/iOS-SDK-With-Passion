/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEVPNIKEv1ProposalParameters : NSObject

{
    int _diffieHellmanGroup;
    int _lifetimeSeconds;
    long long _encryptionAlgorithm;
    long long _integrityAlgorithm;
}

@property long long encryptionAlgorithm;
@property long long integrityAlgorithm;
@property int diffieHellmanGroup;
@property int lifetimeSeconds;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;

@end
