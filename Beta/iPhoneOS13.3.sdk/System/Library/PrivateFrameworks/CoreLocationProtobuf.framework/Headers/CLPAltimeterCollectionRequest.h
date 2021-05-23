/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBRequest.h>

@class CLPContext, CLPLocation, CLPMeta, NSMutableArray;

@interface CLPAltimeterCollectionRequest : PBRequest

{
    double _startTimestamp;
    double _stopTimestamp;
    int _collectionType;
    CLPContext *_context;
    CLPLocation *_location;
    CLPMeta *_meta;
    NSMutableArray *_pressures;
    NSMutableArray *_wifiScans;
    struct {
        unsigned int startTimestamp:1;
        unsigned int stopTimestamp:1;
        unsigned int collectionType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (nonatomic) _Bool hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) _Bool hasStopTimestamp;
@property (nonatomic) double stopTimestamp;
@property (nonatomic) _Bool hasCollectionType;
@property (nonatomic) int collectionType;
@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) CLPContext *context;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (retain, nonatomic) NSMutableArray *pressures;
@property (retain, nonatomic) NSMutableArray *wifiScans;

+ (Class)pressureType;
+ (Class)wifiScanType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPressure:(id)arg1;
- (void)addWifiScan:(id)arg1;
- (unsigned long long)pressuresCount;
- (void)clearPressures;
- (id)pressureAtIndex:(unsigned long long)arg1;
- (unsigned long long)wifiScansCount;
- (void)clearWifiScans;
- (id)wifiScanAtIndex:(unsigned long long)arg1;
- (id)collectionTypeAsString:(int)arg1;
- (int)StringAsCollectionType:(id)arg1;

@end
