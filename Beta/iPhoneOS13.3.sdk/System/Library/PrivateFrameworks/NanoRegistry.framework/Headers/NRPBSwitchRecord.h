/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSData;

@interface NRPBSwitchRecord : PBCodable <Swift>

{
    double _dateTimeInterval;
    NSData *_deviceIDBytes;
    int _switchIndex;
    struct {
        unsigned int dateTimeInterval:1;
        unsigned int switchIndex:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDeviceIDBytes;
@property (retain, nonatomic) NSData *deviceIDBytes;
@property (nonatomic) _Bool hasDateTimeInterval;
@property (nonatomic) double dateTimeInterval;
@property (nonatomic) _Bool hasSwitchIndex;
@property (nonatomic) int switchIndex;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
