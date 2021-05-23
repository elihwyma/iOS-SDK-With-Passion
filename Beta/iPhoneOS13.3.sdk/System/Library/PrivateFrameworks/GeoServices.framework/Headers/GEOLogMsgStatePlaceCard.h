/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPlaceActionDetails, NSString, PBDataReader;

@interface GEOLogMsgStatePlaceCard : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _possibleActions;
    CDStruct_95bda58d _unactionableUiElements;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_placecardCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placecardType;
    _Bool _transitAdvisoryBanner;
    struct {
        unsigned int has_placecardType:1;
        unsigned int has_transitAdvisoryBanner:1;
        unsigned int read_possibleActions:1;
        unsigned int read_unactionableUiElements:1;
        unsigned int read_placeActionDetails:1;
        unsigned int read_placecardCategory:1;
        unsigned int wrote_possibleActions:1;
        unsigned int wrote_unactionableUiElements:1;
        unsigned int wrote_placeActionDetails:1;
        unsigned int wrote_placecardCategory:1;
        unsigned int wrote_placecardType:1;
        unsigned int wrote_transitAdvisoryBanner:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPlaceActionDetails;
@property (retain, nonatomic) GEOPlaceActionDetails *placeActionDetails;
@property (nonatomic, readonly) unsigned long long possibleActionsCount;
@property (nonatomic, readonly) int *possibleActions;
@property (nonatomic, readonly) unsigned long long unactionableUiElementsCount;
@property (nonatomic, readonly) int *unactionableUiElements;
@property (nonatomic, readonly) _Bool hasPlacecardCategory;
@property (retain, nonatomic) NSString *placecardCategory;
@property (nonatomic) _Bool hasPlacecardType;
@property (nonatomic) int placecardType;
@property (nonatomic) _Bool hasTransitAdvisoryBanner;
@property (nonatomic) _Bool transitAdvisoryBanner;

+ (_Bool)isValid:(id)arg1;

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
- (void)readAll:(_Bool)arg1;
- (void)_readPlaceActionDetails;
- (void)addPossibleAction:(int)arg1;
- (void)addUnactionableUiElement:(int)arg1;
- (void)_readPossibleActions;
- (void)_addNoFlagsPossibleAction:(int)arg1;
- (void)_readUnactionableUiElements;
- (void)_addNoFlagsUnactionableUiElement:(int)arg1;
- (void)_readPlacecardCategory;
- (void)clearPossibleActions;
- (int)possibleActionAtIndex:(unsigned long long)arg1;
- (void)clearUnactionableUiElements;
- (int)unactionableUiElementAtIndex:(unsigned long long)arg1;
- (void)setPossibleActions:(int *)arg1 count:(unsigned long long)arg2;
- (id)possibleActionsAsString:(int)arg1;
- (int)StringAsPossibleActions:(id)arg1;
- (void)setUnactionableUiElements:(int *)arg1 count:(unsigned long long)arg2;
- (id)unactionableUiElementsAsString:(int)arg1;
- (int)StringAsUnactionableUiElements:(id)arg1;
- (id)placecardTypeAsString:(int)arg1;
- (int)StringAsPlacecardType:(id)arg1;

@end
