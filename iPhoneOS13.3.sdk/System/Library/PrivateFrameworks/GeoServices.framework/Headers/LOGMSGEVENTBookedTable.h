//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface LOGMSGEVENTBookedTable : PBCodable <NSCopying>
{
    NSString *_appId;
    NSUInteger _muid;
    BOOL _bookedUsingMaps;
    BOOL _called;
    BOOL _cancelled;
    BOOL _isAsync;
    BOOL _routed;
    BOOL _shared;
    BOOL _tappedCancelReservation;
    BOOL _tappedChangeReservation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetailsFromPlacecard;
    BOOL _viewedInPlacecard;
    BOOL _viewedInProactiveTray;
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

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasShared;
@property(nonatomic) BOOL shared;
@property(nonatomic) BOOL hasTappedCancelReservation;
@property(nonatomic) BOOL tappedCancelReservation;
@property(nonatomic) BOOL hasTappedChangeReservation;
@property(nonatomic) BOOL tappedChangeReservation;
@property(nonatomic) BOOL hasRouted;
@property(nonatomic) BOOL routed;
@property(nonatomic) BOOL hasCalled;
@property(nonatomic) BOOL called;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
@property(retain, nonatomic) NSString *appId;
@property(readonly, nonatomic) BOOL hasAppId;
@property(nonatomic) BOOL hasIsAsync;
@property(nonatomic) BOOL isAsync;
@property(nonatomic) BOOL hasViewedDetailsFromPlacecard;
@property(nonatomic) BOOL viewedDetailsFromPlacecard;
@property(nonatomic) BOOL hasViewedInPlacecard;
@property(nonatomic) BOOL viewedInPlacecard;
@property(nonatomic) BOOL hasTappedProactiveTrayItem;
@property(nonatomic) BOOL tappedProactiveTrayItem;
@property(nonatomic) BOOL hasViewedInProactiveTray;
@property(nonatomic) BOOL viewedInProactiveTray;
@property(nonatomic) BOOL hasCancelled;
@property(nonatomic) BOOL cancelled;
@property(nonatomic) BOOL hasBookedUsingMaps;
@property(nonatomic) BOOL bookedUsingMaps;

@end

