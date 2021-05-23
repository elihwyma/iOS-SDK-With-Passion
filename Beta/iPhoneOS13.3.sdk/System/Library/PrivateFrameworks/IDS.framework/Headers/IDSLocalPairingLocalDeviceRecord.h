/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSLocalPairingRecord.h>

@interface IDSLocalPairingLocalDeviceRecord : IDSLocalPairingRecord

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)fullIdentityClassA:(id *)arg1;
- (id)fullIdentityClassC:(id *)arg1;
- (id)fullIdentityClassD:(id *)arg1;
- (id)_fullIdenityForDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
- (id)initWithWithFullIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3;

@end
