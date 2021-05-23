/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _CPDeviceContext, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@interface _CPUsageEnvelope : PBCodable

{
    int _configuredLookbackTimeInDays;
    int _totalSessions;
    _CPUsageSinceLookback *_usageSinceLookback;
    _CPSafariUsagePropensity *_safariUsagePropensity;
    _CPSpotlightUsagePropensity *_spotlightUsagePropensity;
    _CPImagesUsagePropensity *_imagesUsagePropensity;
    _CPNewsUsagePropensity *_newsUsagePropensity;
    long long _collectionStartTimestamp;
    long long _collectionEndTimestamp;
    _CPDeviceContext *_context;
    NSData *_uuidBytes;
    unsigned long long _whichKind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity;
@property (retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity;
@property (retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity;
@property (retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic) int totalSessions;
@property (retain, nonatomic) _CPDeviceContext *context;
@property (copy, nonatomic) NSData *uuidBytes;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichKind;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)clearKind;

@end
