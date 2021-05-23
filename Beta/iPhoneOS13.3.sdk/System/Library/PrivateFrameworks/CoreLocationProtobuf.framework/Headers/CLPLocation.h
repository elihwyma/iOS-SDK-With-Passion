/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class CLPMotionActivity, CLPPipelineDiagnosticReport, CLPSatelliteReport, NSMutableArray;

@interface CLPLocation : PBCodable

{
    double _latitude;
    double _longitude;
    double _timestamp;
    float _altitude;
    NSMutableArray *_appBundleIdIndices;
    int _context;
    float _course;
    float _courseAccuracy;
    CLPMotionActivity *_dominantMotionActivity;
    int _floor;
    float _horizontalAccuracy;
    float _horzUncSemiMaj;
    float _horzUncSemiMajAz;
    float _horzUncSemiMin;
    int _modeIndicator;
    CLPMotionActivity *_motionActivity;
    int _motionActivityConfidence;
    int _motionActivityType;
    CLPPipelineDiagnosticReport *_pipelineDiagnosticReport;
    int _provider;
    CLPMotionActivity *_rawMotionActivity;
    CLPSatelliteReport *_satReport;
    float _speed;
    float _speedAccuracy;
    float _verticalAccuracy;
    _Bool _isFromLocationController;
    _Bool _motionVehicleConnected;
    _Bool _motionVehicleConnectedStateChanged;
    struct {
        unsigned int altitude:1;
        unsigned int context:1;
        unsigned int course:1;
        unsigned int courseAccuracy:1;
        unsigned int floor:1;
        unsigned int horzUncSemiMaj:1;
        unsigned int horzUncSemiMajAz:1;
        unsigned int horzUncSemiMin:1;
        unsigned int modeIndicator:1;
        unsigned int motionActivityConfidence:1;
        unsigned int motionActivityType:1;
        unsigned int provider:1;
        unsigned int speed:1;
        unsigned int speedAccuracy:1;
        unsigned int verticalAccuracy:1;
        unsigned int isFromLocationController:1;
        unsigned int motionVehicleConnected:1;
        unsigned int motionVehicleConnectedStateChanged:1;
    } _has;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasAltitude;
@property (nonatomic) float altitude;
@property (nonatomic) _Bool hasVerticalAccuracy;
@property (nonatomic) float verticalAccuracy;
@property (nonatomic) _Bool hasSpeed;
@property (nonatomic) float speed;
@property (nonatomic) _Bool hasCourse;
@property (nonatomic) float course;
@property (nonatomic) _Bool hasContext;
@property (nonatomic) int context;
@property (nonatomic) _Bool hasMotionActivityType;
@property (nonatomic) int motionActivityType;
@property (nonatomic) _Bool hasMotionActivityConfidence;
@property (nonatomic) int motionActivityConfidence;
@property (nonatomic) _Bool hasProvider;
@property (nonatomic) int provider;
@property (nonatomic) _Bool hasFloor;
@property (nonatomic) int floor;
@property (retain, nonatomic) NSMutableArray *appBundleIdIndices;
@property (nonatomic) _Bool hasMotionVehicleConnectedStateChanged;
@property (nonatomic) _Bool motionVehicleConnectedStateChanged;
@property (nonatomic) _Bool hasMotionVehicleConnected;
@property (nonatomic) _Bool motionVehicleConnected;
@property (nonatomic, readonly) _Bool hasRawMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *rawMotionActivity;
@property (nonatomic, readonly) _Bool hasMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *motionActivity;
@property (nonatomic, readonly) _Bool hasDominantMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *dominantMotionActivity;
@property (nonatomic) _Bool hasCourseAccuracy;
@property (nonatomic) float courseAccuracy;
@property (nonatomic) _Bool hasSpeedAccuracy;
@property (nonatomic) float speedAccuracy;
@property (nonatomic) _Bool hasModeIndicator;
@property (nonatomic) int modeIndicator;
@property (nonatomic) _Bool hasHorzUncSemiMaj;
@property (nonatomic) float horzUncSemiMaj;
@property (nonatomic) _Bool hasHorzUncSemiMin;
@property (nonatomic) float horzUncSemiMin;
@property (nonatomic) _Bool hasHorzUncSemiMajAz;
@property (nonatomic) float horzUncSemiMajAz;
@property (nonatomic, readonly) _Bool hasSatReport;
@property (retain, nonatomic) CLPSatelliteReport *satReport;
@property (nonatomic) _Bool hasIsFromLocationController;
@property (nonatomic) _Bool isFromLocationController;
@property (nonatomic, readonly) _Bool hasPipelineDiagnosticReport;
@property (retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearAppBundleIdIndices;
- (void)addAppBundleIdIndices:(id)arg1;
- (unsigned long long)appBundleIdIndicesCount;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)arg1;
- (id)modeIndicatorAsString:(int)arg1;
- (int)StringAsModeIndicator:(id)arg1;

@end
