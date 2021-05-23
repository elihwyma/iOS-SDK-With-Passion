/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable

{
    unsigned int _defaultPaymentInstrumentIndex;
    int _nearby;
    NSMutableArray *_paymentInstruments;
    unsigned int _protocolVersion;
    NSMutableArray *_supportedSetupFeatures;
    _Bool _deviceDisabled;
    _Bool _locked;
    _Bool _supportsFaceID;
    _Bool _userDisabled;
    struct {
        unsigned int defaultPaymentInstrumentIndex:1;
        unsigned int nearby:1;
        unsigned int protocolVersion:1;
        unsigned int deviceDisabled:1;
        unsigned int locked:1;
        unsigned int supportsFaceID:1;
        unsigned int userDisabled:1;
    } _has;
}

@property (nonatomic) _Bool hasLocked;
@property (nonatomic) _Bool locked;
@property (retain, nonatomic) NSMutableArray *paymentInstruments;
@property (nonatomic) _Bool hasDefaultPaymentInstrumentIndex;
@property (nonatomic) unsigned int defaultPaymentInstrumentIndex;
@property (nonatomic) _Bool hasUserDisabled;
@property (nonatomic) _Bool userDisabled;
@property (nonatomic) _Bool hasDeviceDisabled;
@property (nonatomic) _Bool deviceDisabled;
@property (nonatomic) _Bool hasNearby;
@property (nonatomic) int nearby;
@property (nonatomic) _Bool hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) _Bool hasSupportsFaceID;
@property (nonatomic) _Bool supportsFaceID;
@property (retain, nonatomic) NSMutableArray *supportedSetupFeatures;

+ (Class)paymentInstrumentsType;
+ (Class)supportedSetupFeaturesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPaymentInstruments:(id)arg1;
- (void)addSupportedSetupFeatures:(id)arg1;
- (unsigned long long)paymentInstrumentsCount;
- (void)clearPaymentInstruments;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedSetupFeaturesCount;
- (void)clearSupportedSetupFeatures;
- (id)supportedSetupFeaturesAtIndex:(unsigned long long)arg1;
- (id)nearbyAsString:(int)arg1;
- (int)StringAsNearby:(id)arg1;

@end
