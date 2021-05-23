/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <Swift>

{
    double _date;
    long long _index;
    NRPBDeviceCollectionDiff *_diff;
    struct {
        unsigned int date:1;
        unsigned int index:1;
    } _has;
}

@property (nonatomic) _Bool hasIndex;
@property (nonatomic) long long index;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic, readonly) _Bool hasDiff;
@property (retain, nonatomic) NRPBDeviceCollectionDiff *diff;

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
