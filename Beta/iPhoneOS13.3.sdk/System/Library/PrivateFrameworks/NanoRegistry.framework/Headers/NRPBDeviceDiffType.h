/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRPBDeviceDiff;

@interface NRPBDeviceDiffType : PBCodable <Swift>

{
    int _changeType;
    NRPBDeviceDiff *_diff;
    CDStruct_f5f6ac14 _has;
}

@property (nonatomic) _Bool hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic, readonly) _Bool hasDiff;
@property (retain, nonatomic) NRPBDeviceDiff *diff;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;

@end
