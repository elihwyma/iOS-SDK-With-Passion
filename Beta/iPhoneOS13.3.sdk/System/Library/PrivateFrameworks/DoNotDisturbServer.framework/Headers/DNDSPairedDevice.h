/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface DNDSPairedDevice : NSObject

{
    NSString *_deviceIdentifier;
    unsigned long long _deviceClass;
    unsigned long long _syncProtocolVersion;
    NSUUID *_pairingIdentifier;
    NSString *_pairingDataStore;
}

@property (copy, nonatomic, readonly) NSUUID *pairingIdentifier;
@property (copy, nonatomic, readonly) NSString *pairingDataStore;
@property (copy, nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) unsigned long long deviceClass;
@property (nonatomic, readonly) unsigned long long syncProtocolVersion;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3 pairingIdentifier:(id)arg4 pairingDataStore:(id)arg5;

@end
