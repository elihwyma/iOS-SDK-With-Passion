/*
 Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

#import <Foundation/NSObject.h>

@interface PRChipInfo : NSObject

{
    unsigned char _prodMode;
    unsigned char _secureMode;
    unsigned char _securityDomain;
    unsigned short _chipID;
    unsigned short _boardID;
    unsigned int _bootMode;
    unsigned long long _ECID;
}

@property (nonatomic, readonly) unsigned long long ECID;
@property (nonatomic, readonly) unsigned short chipID;
@property (nonatomic, readonly) unsigned short boardID;
@property (nonatomic, readonly) unsigned int bootMode;
@property (nonatomic, readonly) unsigned char prodMode;
@property (nonatomic, readonly) unsigned char secureMode;
@property (nonatomic, readonly) unsigned char securityDomain;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithECID:(unsigned long long)arg1 chipID:(unsigned short)arg2 boardID:(unsigned short)arg3 bootMode:(unsigned int)arg4 prodMode:(unsigned char)arg5 secureMode:(unsigned char)arg6 securityDomain:(unsigned char)arg7;

@end
