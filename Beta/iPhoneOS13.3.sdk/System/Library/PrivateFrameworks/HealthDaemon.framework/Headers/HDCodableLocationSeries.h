/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSData, NSMutableArray, NSString;

@interface HDCodableLocationSeries : PBCodable <Swift>

{
    NSData *_continuationUUID;
    NSMutableArray *_locationDatas;
    HDCodableSample *_sample;
    _Bool _final;
    _Bool _frozen;
    struct {
        unsigned int final:1;
        unsigned int frozen:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) _Bool hasFrozen;
@property (nonatomic) _Bool frozen;
@property (nonatomic, readonly) _Bool hasContinuationUUID;
@property (retain, nonatomic) NSData *continuationUUID;
@property (nonatomic) _Bool hasFinal;
@property (nonatomic) _Bool final;
@property (retain, nonatomic) NSMutableArray *locationDatas;

+ (Class)locationDataType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (void)addLocationData:(id)arg1;
- (unsigned long long)locationDatasCount;
- (void)clearLocationDatas;
- (id)locationDataAtIndex:(unsigned long long)arg1;

@end
