//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_paths;
    NSString *_segmentName;
    NSString *_ticketingUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
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

+ (BOOL)isValid:(id)arg1;
+ (Class)pathType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)pathAtIndex:(NSUInteger)arg1;
- (NSUInteger)pathsCount;
- (void)_addNoFlagsPath:(id)arg1;
- (void)addPath:(id)arg1;
- (void)clearPaths;
@property(retain, nonatomic) NSMutableArray *paths;
- (void)_readPaths;
@property(retain, nonatomic) NSString *segmentName;
@property(readonly, nonatomic) BOOL hasSegmentName;
- (void)_readSegmentName;
@property(retain, nonatomic) NSString *ticketingUrl;
@property(readonly, nonatomic) BOOL hasTicketingUrl;
- (void)_readTicketingUrl;
- (id)initWithData:(id)arg1;
- (id)init;

@end

