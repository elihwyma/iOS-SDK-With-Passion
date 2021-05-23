/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader;

@interface GEONavigationRouteTransitSummary : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_possibleStops;
    NSMutableArray *_scheduledLinks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_possibleStops:1;
        unsigned int read_scheduledLinks:1;
        unsigned int wrote_possibleStops:1;
        unsigned int wrote_scheduledLinks:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *scheduledLinks;
@property (retain, nonatomic) NSMutableArray *possibleStops;

+ (_Bool)isValid:(id)arg1;
+ (Class)scheduledLinkType;
+ (Class)possibleStopType;

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
- (id)initWithRoute:(id)arg1;
- (void)_readScheduledLinks;
- (void)_addNoFlagsScheduledLink:(id)arg1;
- (void)_readPossibleStops;
- (void)_addNoFlagsPossibleStop:(id)arg1;
- (unsigned long long)scheduledLinksCount;
- (void)clearScheduledLinks;
- (id)scheduledLinkAtIndex:(unsigned long long)arg1;
- (void)addScheduledLink:(id)arg1;
- (unsigned long long)possibleStopsCount;
- (void)clearPossibleStops;
- (id)possibleStopAtIndex:(unsigned long long)arg1;
- (void)addPossibleStop:(id)arg1;

@end
