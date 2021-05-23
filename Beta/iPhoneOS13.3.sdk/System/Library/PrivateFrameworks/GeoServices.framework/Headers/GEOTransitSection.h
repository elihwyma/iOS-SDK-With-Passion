/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSection : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _actionSheetArtworkIndexs;
    CDStruct_9f2792e4 _routeDetailsArtworkIndexs;
    CDStruct_9f2792e4 _stepIndexs;
    NSString *_actionSheetName;
    NSMutableArray *_ticketingSegments;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _nextOptionsIndex;
    _Bool _disableAlightNotifications;
    struct {
        unsigned int has_nextOptionsIndex:1;
        unsigned int has_disableAlightNotifications:1;
        unsigned int read_unknownFields:1;
        unsigned int read_actionSheetArtworkIndexs:1;
        unsigned int read_routeDetailsArtworkIndexs:1;
        unsigned int read_stepIndexs:1;
        unsigned int read_actionSheetName:1;
        unsigned int read_ticketingSegments:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_actionSheetArtworkIndexs:1;
        unsigned int wrote_routeDetailsArtworkIndexs:1;
        unsigned int wrote_stepIndexs:1;
        unsigned int wrote_actionSheetName:1;
        unsigned int wrote_ticketingSegments:1;
        unsigned int wrote_nextOptionsIndex:1;
        unsigned int wrote_disableAlightNotifications:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long stepIndexsCount;
@property (nonatomic, readonly) unsigned int *stepIndexs;
@property (nonatomic) _Bool hasNextOptionsIndex;
@property (nonatomic) int nextOptionsIndex;
@property (nonatomic, readonly) _Bool hasActionSheetName;
@property (retain, nonatomic) NSString *actionSheetName;
@property (nonatomic, readonly) unsigned long long actionSheetArtworkIndexsCount;
@property (nonatomic, readonly) unsigned int *actionSheetArtworkIndexs;
@property (nonatomic, readonly) unsigned long long routeDetailsArtworkIndexsCount;
@property (nonatomic, readonly) unsigned int *routeDetailsArtworkIndexs;
@property (nonatomic) _Bool hasDisableAlightNotifications;
@property (nonatomic) _Bool disableAlightNotifications;
@property (retain, nonatomic) NSMutableArray *ticketingSegments;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)ticketingSegmentType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned int)stepIndexAtIndex:(unsigned long long)arg1;
- (void)_readStepIndexs;
- (void)_addNoFlagsStepIndex:(unsigned int)arg1;
- (void)_readActionSheetName;
- (void)_readActionSheetArtworkIndexs;
- (void)_addNoFlagsActionSheetArtworkIndex:(unsigned int)arg1;
- (void)_readRouteDetailsArtworkIndexs;
- (void)_addNoFlagsRouteDetailsArtworkIndex:(unsigned int)arg1;
- (void)_readTicketingSegments;
- (void)_addNoFlagsTicketingSegment:(id)arg1;
- (void)clearStepIndexs;
- (void)addStepIndex:(unsigned int)arg1;
- (void)clearActionSheetArtworkIndexs;
- (unsigned int)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addActionSheetArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsArtworkIndexs;
- (unsigned int)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addRouteDetailsArtworkIndex:(unsigned int)arg1;
- (unsigned long long)ticketingSegmentsCount;
- (void)clearTicketingSegments;
- (id)ticketingSegmentAtIndex:(unsigned long long)arg1;
- (void)addTicketingSegment:(id)arg1;
- (void)setStepIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setActionSheetArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setRouteDetailsArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
