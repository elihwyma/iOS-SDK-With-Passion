//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbyResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPDLitePlaceResult _litePlaceResults;
    NSUInteger _litePlaceResultsCount;
    NSUInteger _litePlaceResultsSpace;
    NSString *_sectionHeader;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_litePlaceResults:1;
        unsigned int read_sectionHeader:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_litePlaceResults:1;
        unsigned int wrote_sectionHeader:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (void)setLitePlaceResults:(struct GEOPDLitePlaceResult )arg1 count:(NSUInteger)arg2;
- (struct GEOPDLitePlaceResult)litePlaceResultAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsLitePlaceResult:(struct GEOPDLitePlaceResult)arg1;
- (void)addLitePlaceResult:(struct GEOPDLitePlaceResult)arg1;
- (void)clearLitePlaceResults;
@property(readonly, nonatomic) struct GEOPDLitePlaceResult litePlaceResults;
@property(readonly, nonatomic) NSUInteger litePlaceResultsCount;
- (void)_readLitePlaceResults;
@property(retain, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) BOOL hasSectionHeader;
- (void)_readSectionHeader;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

