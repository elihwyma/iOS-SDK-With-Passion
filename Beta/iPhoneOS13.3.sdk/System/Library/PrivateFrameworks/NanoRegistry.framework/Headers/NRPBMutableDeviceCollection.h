/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <Swift>

{
    NSMutableArray *_devices;
    NSMutableArray *_pairingIDs;
}

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *devices;

+ (Class)pairingIDsType;
+ (Class)devicesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearDevices;
- (void)addDevices:(id)arg1;
- (void)addPairingIDs:(id)arg1;
- (unsigned long long)pairingIDsCount;
- (void)clearPairingIDs;
- (id)pairingIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)devicesCount;
- (id)devicesAtIndex:(unsigned long long)arg1;

@end
