/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface LOGMSGEVENTBookedTable : PBCodable

{
    NSString *_appId;
    unsigned long long _muid;
    _Bool _bookedUsingMaps;
    _Bool _called;
    _Bool _cancelled;
    _Bool _isAsync;
    _Bool _routed;
    _Bool _shared;
    _Bool _tappedCancelReservation;
    _Bool _tappedChangeReservation;
    _Bool _tappedProactiveTrayItem;
    _Bool _viewedDetailsFromPlacecard;
    _Bool _viewedInPlacecard;
    _Bool _viewedInProactiveTray;
    struct {
        unsigned int has_muid:1;
        unsigned int has_bookedUsingMaps:1;
        unsigned int has_called:1;
        unsigned int has_cancelled:1;
        unsigned int has_isAsync:1;
        unsigned int has_routed:1;
        unsigned int has_shared:1;
        unsigned int has_tappedCancelReservation:1;
        unsigned int has_tappedChangeReservation:1;
        unsigned int has_tappedProactiveTrayItem:1;
        unsigned int has_viewedDetailsFromPlacecard:1;
        unsigned int has_viewedInPlacecard:1;
        unsigned int has_viewedInProactiveTray:1;
    } _flags;
}

@property (nonatomic) _Bool hasBookedUsingMaps;
@property (nonatomic) _Bool bookedUsingMaps;
@property (nonatomic) _Bool hasCancelled;
@property (nonatomic) _Bool cancelled;
@property (nonatomic) _Bool hasViewedInProactiveTray;
@property (nonatomic) _Bool viewedInProactiveTray;
@property (nonatomic) _Bool hasTappedProactiveTrayItem;
@property (nonatomic) _Bool tappedProactiveTrayItem;
@property (nonatomic) _Bool hasViewedInPlacecard;
@property (nonatomic) _Bool viewedInPlacecard;
@property (nonatomic) _Bool hasViewedDetailsFromPlacecard;
@property (nonatomic) _Bool viewedDetailsFromPlacecard;
@property (nonatomic) _Bool hasIsAsync;
@property (nonatomic) _Bool isAsync;
@property (nonatomic, readonly) _Bool hasAppId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasCalled;
@property (nonatomic) _Bool called;
@property (nonatomic) _Bool hasRouted;
@property (nonatomic) _Bool routed;
@property (nonatomic) _Bool hasTappedChangeReservation;
@property (nonatomic) _Bool tappedChangeReservation;
@property (nonatomic) _Bool hasTappedCancelReservation;
@property (nonatomic) _Bool tappedCancelReservation;
@property (nonatomic) _Bool hasShared;
@property (nonatomic) _Bool shared;

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

@end
