/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable

{
    unsigned long long _detectionTimeMs;
    unsigned long long _timestamp;
    int _appLinkPreferredOpenStrategy;
    int _barcodeDataType;
    int _barcodeSourceType;
    int _barcodeURLType;
    int _clientType;
    int _invalidBarcodeDataType;
    struct {
        unsigned int detectionTimeMs:1;
        unsigned int timestamp:1;
        unsigned int appLinkPreferredOpenStrategy:1;
        unsigned int barcodeDataType:1;
        unsigned int barcodeSourceType:1;
        unsigned int barcodeURLType:1;
        unsigned int clientType:1;
        unsigned int invalidBarcodeDataType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasClientType;
@property (nonatomic) int clientType;
@property (nonatomic) _Bool hasBarcodeDataType;
@property (nonatomic) int barcodeDataType;
@property (nonatomic) _Bool hasDetectionTimeMs;
@property (nonatomic) unsigned long long detectionTimeMs;
@property (nonatomic) _Bool hasInvalidBarcodeDataType;
@property (nonatomic) int invalidBarcodeDataType;
@property (nonatomic) _Bool hasBarcodeURLType;
@property (nonatomic) int barcodeURLType;
@property (nonatomic) _Bool hasAppLinkPreferredOpenStrategy;
@property (nonatomic) int appLinkPreferredOpenStrategy;
@property (nonatomic) _Bool hasBarcodeSourceType;
@property (nonatomic) int barcodeSourceType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)clientTypeAsString:(int)arg1;
- (int)StringAsClientType:(id)arg1;
- (id)barcodeDataTypeAsString:(int)arg1;
- (int)StringAsBarcodeDataType:(id)arg1;
- (id)barcodeURLTypeAsString:(int)arg1;
- (int)StringAsBarcodeURLType:(id)arg1;
- (id)barcodeSourceTypeAsString:(int)arg1;
- (int)StringAsBarcodeSourceType:(id)arg1;
- (id)invalidBarcodeDataTypeAsString:(int)arg1;
- (int)StringAsInvalidBarcodeDataType:(id)arg1;
- (id)appLinkPreferredOpenStrategyAsString:(int)arg1;
- (int)StringAsAppLinkPreferredOpenStrategy:(id)arg1;

@end
