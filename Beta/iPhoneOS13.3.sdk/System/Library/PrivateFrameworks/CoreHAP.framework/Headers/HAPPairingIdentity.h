/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFPairingIdentity.h>

@interface HAPPairingIdentity : HMFPairingIdentity

{
    unsigned long long _permissions;
}

@property (nonatomic, readonly) unsigned long long permissions;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;

@end
