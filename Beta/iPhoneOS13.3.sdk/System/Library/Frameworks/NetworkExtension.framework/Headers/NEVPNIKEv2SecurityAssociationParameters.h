/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject

{
    int _lifetimeMinutes;
    long long _encryptionAlgorithm;
    long long _integrityAlgorithm;
    long long _diffieHellmanGroup;
}

@property long long encryptionAlgorithm;
@property long long integrityAlgorithm;
@property long long diffieHellmanGroup;
@property int lifetimeMinutes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
