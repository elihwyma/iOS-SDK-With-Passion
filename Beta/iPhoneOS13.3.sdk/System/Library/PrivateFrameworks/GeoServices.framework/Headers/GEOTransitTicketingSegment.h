/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitTicketingSegment : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_paths:1;
        unsigned int read_segmentName:1;
        unsigned int read_ticketingUrl:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_paths:1;
        unsigned int wrote_segmentName:1;
        unsigned int wrote_ticketingUrl:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTicketingUrl;
@property (retain, nonatomic) NSString *ticketingUrl;
@property (nonatomic, readonly) _Bool hasSegmentName;
@property (retain, nonatomic) NSString *segmentName;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)pathType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readTicketingUrl;
- (void)_readSegmentName;
- (void)_readPaths;
- (void)_addNoFlagsPath:(id)arg1;
- (unsigned long long)pathsCount;
- (void)clearPaths;
- (id)pathAtIndex:(unsigned long long)arg1;
- (void)addPath:(id)arg1;

@end
