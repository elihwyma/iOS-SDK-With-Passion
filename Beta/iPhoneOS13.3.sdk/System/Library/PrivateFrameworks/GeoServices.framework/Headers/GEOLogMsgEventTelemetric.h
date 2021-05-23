/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable

{
    NSMutableArray *_telemetricEntitys;
}

@property (retain, nonatomic) NSMutableArray *telemetricEntitys;

+ (_Bool)isValid:(id)arg1;
+ (Class)telemetricEntityType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addTelemetricEntity:(id)arg1;
- (unsigned long long)telemetricEntitysCount;
- (void)clearTelemetricEntitys;
- (id)telemetricEntityAtIndex:(unsigned long long)arg1;

@end
