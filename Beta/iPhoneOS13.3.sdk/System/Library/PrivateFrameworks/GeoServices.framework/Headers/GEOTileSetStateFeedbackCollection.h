/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTileSetStateFeedbackCollection : PBCodable

{
    struct GEOSessionID _sessionID;
    double _durationInOldState;
    double _newCoverage;
    double _oldCoverage;
    double _sessionRelativeTimestamp;
    int _tileSetStateType;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_durationInOldState:1;
        unsigned int has_newCoverage:1;
        unsigned int has_oldCoverage:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_tileSetStateType:1;
    } _flags;
}

@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) struct GEOSessionID sessionID;
@property (nonatomic) _Bool hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) _Bool hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) _Bool hasTileSetStateType;
@property (nonatomic) int tileSetStateType;
@property (nonatomic) _Bool hasOldCoverage;
@property (nonatomic) double oldCoverage;
@property (nonatomic) _Bool hasNewCoverage;
@property (nonatomic) double newCoverage;

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
- (id)tileSetStateTypeAsString:(int)arg1;
- (int)StringAsTileSetStateType:(id)arg1;

@end
