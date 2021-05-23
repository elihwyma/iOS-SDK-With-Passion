/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSLocalPairingRecord.h>

@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord

{
    NSUUID *_cbuuid;
}

@property (nonatomic, readonly) NSUUID *cbuuid;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publicIdentityClassA:(id *)arg1;
- (id)publicIdentityClassC:(id *)arg1;
- (id)publicIdentityClassD:(id *)arg1;
- (id)_publicIdenityForDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;
- (id)initWithCBUUID:(id)arg1 publicIdentityDataClassA:(id)arg2 classC:(id)arg3 classD:(id)arg4;

@end
