/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOCountdownData, GEOPBTransitArtwork, GEOPrice, NSArray, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@protocol GEOServerFormatTokenCountdownValue, GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

@interface GEOFormatArgument : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _valInt3s;
    GEOPBTransitArtwork *_artwork;
    GEOCountdownData *_countdownData;
    GEOPrice *_price;
    NSMutableArray *_timestampDatas;
    NSString *_token;
    NSString *_valString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _format;
    unsigned int _valInt1;
    unsigned int _valInt2;
    struct {
        unsigned int has_format:1;
        unsigned int has_valInt1:1;
        unsigned int has_valInt2:1;
        unsigned int read_unknownFields:1;
        unsigned int read_valInt3s:1;
        unsigned int read_artwork:1;
        unsigned int read_countdownData:1;
        unsigned int read_price:1;
        unsigned int read_timestampDatas:1;
        unsigned int read_token:1;
        unsigned int read_valString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_valInt3s:1;
        unsigned int wrote_artwork:1;
        unsigned int wrote_countdownData:1;
        unsigned int wrote_price:1;
        unsigned int wrote_timestampDatas:1;
        unsigned int wrote_token:1;
        unsigned int wrote_valString:1;
        unsigned int wrote_format:1;
        unsigned int wrote_valInt1:1;
        unsigned int wrote_valInt2:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) unsigned int value1;
@property (nonatomic, readonly) unsigned int value2;
@property (nonatomic, readonly) NSArray *value3s;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) id <GEOServerFormatTokenPriceValue> priceValue;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> artworkValue;
@property (nonatomic, readonly) NSArray *timeStampValues;
@property (nonatomic, readonly) id <GEOServerFormatTokenCountdownValue> countdownValue;
@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) _Bool hasValInt1;
@property (nonatomic) unsigned int valInt1;
@property (nonatomic) _Bool hasValInt2;
@property (nonatomic) unsigned int valInt2;
@property (nonatomic, readonly) unsigned long long valInt3sCount;
@property (nonatomic, readonly) unsigned int *valInt3s;
@property (nonatomic, readonly) _Bool hasValString;
@property (retain, nonatomic) NSString *valString;
@property (nonatomic, readonly) _Bool hasPrice;
@property (retain, nonatomic) GEOPrice *price;
@property (nonatomic, readonly) _Bool hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (retain, nonatomic) NSMutableArray *timestampDatas;
@property (nonatomic, readonly) _Bool hasCountdownData;
@property (retain, nonatomic) GEOCountdownData *countdownData;
@property (nonatomic) _Bool hasFormat;
@property (nonatomic) int format;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)timestampDataType;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readPrice;
- (void)_readArtwork;
- (unsigned int)valInt3AtIndex:(unsigned long long)arg1;
- (void)_readToken;
- (void)_readValInt3s;
- (void)_addNoFlagsValInt3:(unsigned int)arg1;
- (void)_readValString;
- (void)_readTimestampDatas;
- (void)_addNoFlagsTimestampData:(id)arg1;
- (void)_readCountdownData;
- (void)clearValInt3s;
- (void)addValInt3:(unsigned int)arg1;
- (unsigned long long)timestampDatasCount;
- (void)clearTimestampDatas;
- (id)timestampDataAtIndex:(unsigned long long)arg1;
- (void)addTimestampData:(id)arg1;
- (void)setValInt3s:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)formatAsString:(int)arg1;
- (int)StringAsFormat:(id)arg1;

@end
