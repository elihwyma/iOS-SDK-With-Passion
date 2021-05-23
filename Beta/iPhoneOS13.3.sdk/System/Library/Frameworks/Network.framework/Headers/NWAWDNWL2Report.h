/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDNWL2Report : PBCodable

{
    int _cellularLqm;
    int _cellularPowerCostDownload;
    int _cellularPowerCostUpload;
    int _cellularRadioTechnology;
    int _wifiLqm;
    int _wifiRadioTechnology;
    int _wifiRssi;
    _Bool _cellularKnownGood;
    _Bool _wifiKnownGood;
    struct {
        unsigned int cellularLqm:1;
        unsigned int cellularPowerCostDownload:1;
        unsigned int cellularPowerCostUpload:1;
        unsigned int cellularRadioTechnology:1;
        unsigned int wifiLqm:1;
        unsigned int wifiRadioTechnology:1;
        unsigned int wifiRssi:1;
        unsigned int cellularKnownGood:1;
        unsigned int wifiKnownGood:1;
    } _has;
}

@property (nonatomic) _Bool hasCellularLqm;
@property (nonatomic) int cellularLqm;
@property (nonatomic) _Bool hasCellularPowerCostDownload;
@property (nonatomic) int cellularPowerCostDownload;
@property (nonatomic) _Bool hasCellularPowerCostUpload;
@property (nonatomic) int cellularPowerCostUpload;
@property (nonatomic) _Bool hasCellularKnownGood;
@property (nonatomic) _Bool cellularKnownGood;
@property (nonatomic) _Bool hasCellularRadioTechnology;
@property (nonatomic) int cellularRadioTechnology;
@property (nonatomic) _Bool hasWifiLqm;
@property (nonatomic) int wifiLqm;
@property (nonatomic) _Bool hasWifiRssi;
@property (nonatomic) int wifiRssi;
@property (nonatomic) _Bool hasWifiKnownGood;
@property (nonatomic) _Bool wifiKnownGood;
@property (nonatomic) _Bool hasWifiRadioTechnology;
@property (nonatomic) int wifiRadioTechnology;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)cellularPowerCostDownloadAsString:(int)arg1;
- (int)StringAsCellularPowerCostDownload:(id)arg1;
- (id)cellularPowerCostUploadAsString:(int)arg1;
- (int)StringAsCellularPowerCostUpload:(id)arg1;
- (id)cellularRadioTechnologyAsString:(int)arg1;
- (int)StringAsCellularRadioTechnology:(id)arg1;
- (id)wifiRadioTechnologyAsString:(int)arg1;
- (int)StringAsWifiRadioTechnology:(id)arg1;

@end
