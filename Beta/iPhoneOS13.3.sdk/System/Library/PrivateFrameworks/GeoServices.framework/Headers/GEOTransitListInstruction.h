/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, GEOTransitListTimeInstruction, NSArray, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitListInstruction : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_detailFormatteds;
    GEOFormattedString *_expandableListFormatted;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_priceFormatteds;
    GEOTransitListTimeInstruction *_timeInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_commandFormatteds:1;
        unsigned int read_detailFormatteds:1;
        unsigned int read_expandableListFormatted:1;
        unsigned int read_noticeFormatteds:1;
        unsigned int read_priceFormatteds:1;
        unsigned int read_timeInstructions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_commandFormatteds:1;
        unsigned int wrote_detailFormatteds:1;
        unsigned int wrote_expandableListFormatted:1;
        unsigned int wrote_noticeFormatteds:1;
        unsigned int wrote_priceFormatteds:1;
        unsigned int wrote_timeInstructions:1;
    } _flags;
}

@property (nonatomic, readonly) NSArray *serverFormattedCommands;
@property (nonatomic, readonly) NSArray *serverFormattedDetails;
@property (nonatomic, readonly) NSArray *serverFormattedNotices;
@property (nonatomic, readonly) NSArray *serverFormattedPrices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *noticeFormatteds;
@property (retain, nonatomic) NSMutableArray *commandFormatteds;
@property (retain, nonatomic) NSMutableArray *detailFormatteds;
@property (retain, nonatomic) NSMutableArray *priceFormatteds;
@property (nonatomic, readonly) _Bool hasExpandableListFormatted;
@property (retain, nonatomic) GEOFormattedString *expandableListFormatted;
@property (nonatomic, readonly) _Bool hasTimeInstructions;
@property (retain, nonatomic) GEOTransitListTimeInstruction *timeInstructions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)noticeFormattedType;
+ (Class)commandFormattedType;
+ (Class)detailFormattedType;
+ (Class)priceFormattedType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readNoticeFormatteds;
- (void)_addNoFlagsNoticeFormatted:(id)arg1;
- (void)_readCommandFormatteds;
- (void)_addNoFlagsCommandFormatted:(id)arg1;
- (void)_readDetailFormatteds;
- (void)_addNoFlagsDetailFormatted:(id)arg1;
- (void)_readPriceFormatteds;
- (void)_addNoFlagsPriceFormatted:(id)arg1;
- (void)_readExpandableListFormatted;
- (void)_readTimeInstructions;
- (unsigned long long)noticeFormattedsCount;
- (void)clearNoticeFormatteds;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;
- (void)addNoticeFormatted:(id)arg1;
- (unsigned long long)commandFormattedsCount;
- (void)clearCommandFormatteds;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;
- (void)addCommandFormatted:(id)arg1;
- (unsigned long long)detailFormattedsCount;
- (void)clearDetailFormatteds;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;
- (void)addDetailFormatted:(id)arg1;
- (unsigned long long)priceFormattedsCount;
- (void)clearPriceFormatteds;
- (id)priceFormattedAtIndex:(unsigned long long)arg1;
- (void)addPriceFormatted:(id)arg1;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

@end
