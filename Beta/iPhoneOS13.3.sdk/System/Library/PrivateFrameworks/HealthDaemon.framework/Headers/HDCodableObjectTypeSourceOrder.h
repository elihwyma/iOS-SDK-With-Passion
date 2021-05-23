/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData;

@interface HDCodableObjectTypeSourceOrder : PBCodable <Swift>

{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _modificationDates;
    long long _objectType;
    NSData *_sourceUUIDs;
    _Bool _userOrdered;
    struct {
        unsigned int objectType:1;
        unsigned int userOrdered:1;
    } _has;
}

@property (nonatomic) _Bool hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) _Bool hasUserOrdered;
@property (nonatomic) _Bool userOrdered;
@property (nonatomic, readonly) _Bool hasSourceUUIDs;
@property (retain, nonatomic) NSData *sourceUUIDs;
@property (nonatomic, readonly) unsigned long long modificationDatesCount;
@property (nonatomic, readonly) double *modificationDates;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (long long)decodedDataTypeCode;
- (void)addModificationDates:(double)arg1;
- (void)clearModificationDates;
- (double)modificationDatesAtIndex:(unsigned long long)arg1;
- (void)setModificationDates:(double *)arg1 count:(unsigned long long)arg2;

@end
