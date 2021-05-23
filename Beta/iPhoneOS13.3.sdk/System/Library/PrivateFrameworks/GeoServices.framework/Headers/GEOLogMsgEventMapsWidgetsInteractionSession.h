/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapsDestinationsWidget, GEOMapsNearbyWidget, GEOMapsTransitWidget, PBDataReader;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable

{
    PBDataReader *_reader;
    GEOMapsDestinationsWidget *_mapsDestinationsWidget;
    GEOMapsNearbyWidget *_mapsNearbyWidget;
    GEOMapsTransitWidget *_mapsTransitWidget;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _duration;
    int _endState;
    int _localDayOfWeek;
    int _localHour;
    int _mapsWidgetType;
    _Bool _lockedMode;
    struct {
        unsigned int has_duration:1;
        unsigned int has_endState:1;
        unsigned int has_localDayOfWeek:1;
        unsigned int has_localHour:1;
        unsigned int has_mapsWidgetType:1;
        unsigned int has_lockedMode:1;
        unsigned int read_mapsDestinationsWidget:1;
        unsigned int read_mapsNearbyWidget:1;
        unsigned int read_mapsTransitWidget:1;
        unsigned int wrote_mapsDestinationsWidget:1;
        unsigned int wrote_mapsNearbyWidget:1;
        unsigned int wrote_mapsTransitWidget:1;
        unsigned int wrote_duration:1;
        unsigned int wrote_endState:1;
        unsigned int wrote_localDayOfWeek:1;
        unsigned int wrote_localHour:1;
        unsigned int wrote_mapsWidgetType:1;
        unsigned int wrote_lockedMode:1;
    } _flags;
}

@property (nonatomic) _Bool hasMapsWidgetType;
@property (nonatomic) int mapsWidgetType;
@property (nonatomic) _Bool hasEndState;
@property (nonatomic) int endState;
@property (nonatomic, readonly) _Bool hasMapsDestinationsWidget;
@property (retain, nonatomic) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (nonatomic, readonly) _Bool hasMapsTransitWidget;
@property (retain, nonatomic) GEOMapsTransitWidget *mapsTransitWidget;
@property (nonatomic, readonly) _Bool hasMapsNearbyWidget;
@property (retain, nonatomic) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (nonatomic) _Bool hasLockedMode;
@property (nonatomic) _Bool lockedMode;
@property (nonatomic) _Bool hasLocalHour;
@property (nonatomic) int localHour;
@property (nonatomic) _Bool hasLocalDayOfWeek;
@property (nonatomic) int localDayOfWeek;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) int duration;

+ (_Bool)isValid:(id)arg1;

- (id)init;
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
- (id)endStateAsString:(int)arg1;
- (int)StringAsEndState:(id)arg1;
- (void)_readMapsDestinationsWidget;
- (void)_readMapsTransitWidget;
- (void)_readMapsNearbyWidget;
- (id)mapsWidgetTypeAsString:(int)arg1;
- (int)StringAsMapsWidgetType:(id)arg1;

@end
