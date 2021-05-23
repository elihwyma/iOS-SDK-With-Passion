/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOScreenDimension, NSString, PBDataReader, PBUnknownFields;

@interface GEOCarInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    CDStruct_95bda58d _inputMethods;
    struct GEOScreenResolution _screenResolution;
    NSString *_carName;
    NSString *_manufacturer;
    NSString *_model;
    GEOScreenDimension *_screenDimension;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _brightness;
    int _colorRange;
    int _deviceConnection;
    int _navAidedDrivingStatus;
    _Bool _destinationSharingEnabled;
    struct {
        unsigned int has_screenResolution:1;
        unsigned int has_brightness:1;
        unsigned int has_colorRange:1;
        unsigned int has_deviceConnection:1;
        unsigned int has_navAidedDrivingStatus:1;
        unsigned int has_destinationSharingEnabled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_inputMethods:1;
        unsigned int read_carName:1;
        unsigned int read_manufacturer:1;
        unsigned int read_model:1;
        unsigned int read_screenDimension:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_engineTypes:1;
        unsigned int wrote_inputMethods:1;
        unsigned int wrote_screenResolution:1;
        unsigned int wrote_carName:1;
        unsigned int wrote_manufacturer:1;
        unsigned int wrote_model:1;
        unsigned int wrote_screenDimension:1;
        unsigned int wrote_brightness:1;
        unsigned int wrote_colorRange:1;
        unsigned int wrote_deviceConnection:1;
        unsigned int wrote_navAidedDrivingStatus:1;
        unsigned int wrote_destinationSharingEnabled:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic, readonly) _Bool hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) _Bool hasScreenResolution;
@property (nonatomic) struct GEOScreenResolution screenResolution;
@property (nonatomic) _Bool hasDeviceConnection;
@property (nonatomic) int deviceConnection;
@property (nonatomic) _Bool hasDestinationSharingEnabled;
@property (nonatomic) _Bool destinationSharingEnabled;
@property (nonatomic) _Bool hasNavAidedDrivingStatus;
@property (nonatomic) int navAidedDrivingStatus;
@property (nonatomic, readonly) unsigned long long engineTypesCount;
@property (nonatomic, readonly) int *engineTypes;
@property (nonatomic, readonly) _Bool hasCarName;
@property (retain, nonatomic) NSString *carName;
@property (nonatomic, readonly) _Bool hasScreenDimension;
@property (retain, nonatomic) GEOScreenDimension *screenDimension;
@property (nonatomic) _Bool hasColorRange;
@property (nonatomic) int colorRange;
@property (nonatomic) _Bool hasBrightness;
@property (nonatomic) int brightness;
@property (nonatomic, readonly) unsigned long long inputMethodsCount;
@property (nonatomic, readonly) int *inputMethods;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)carInfoWithTraits:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithTraits:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readManufacturer;
- (void)_readModel;
- (void)_readEngineTypes;
- (void)_addNoFlagsEngineType:(int)arg1;
- (void)_readCarName;
- (void)_readScreenDimension;
- (void)_readInputMethods;
- (void)_addNoFlagsInputMethod:(int)arg1;
- (void)clearEngineTypes;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearInputMethods;
- (int)inputMethodAtIndex:(unsigned long long)arg1;
- (void)addInputMethod:(int)arg1;
- (id)deviceConnectionAsString:(int)arg1;
- (int)StringAsDeviceConnection:(id)arg1;
- (id)navAidedDrivingStatusAsString:(int)arg1;
- (int)StringAsNavAidedDrivingStatus:(id)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)engineTypesAsString:(int)arg1;
- (int)StringAsEngineTypes:(id)arg1;
- (void)setInputMethods:(int *)arg1 count:(unsigned long long)arg2;
- (id)inputMethodsAsString:(int)arg1;
- (int)StringAsInputMethods:(id)arg1;

@end
