/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiAccessPoint : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_macId;
    unsigned long long _scanTimestamp;
    unsigned int _age;
    int _channel;
    int _rssi;
    CDStruct_e664d718 _flags;
}

@property (nonatomic, readonly) _Bool hasMacId;
@property (retain, nonatomic) NSString *macId;
@property (nonatomic) _Bool hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) _Bool hasChannel;
@property (nonatomic) int channel;
@property (nonatomic) _Bool hasScanTimestamp;
@property (nonatomic) unsigned long long scanTimestamp;
@property (nonatomic) _Bool hasAge;
@property (nonatomic) unsigned int age;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)initWithGEOWifiAccessPoint:(id)arg1;

@end
