/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORegionalResourceTileData : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributions;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attributions:1;
        unsigned int read_icons:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributions:1;
        unsigned int wrote_icons:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)attributionType;
+ (Class)iconType;

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
- (void)_readAttributions;
- (void)_addNoFlagsAttribution:(id)arg1;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (void)addAttribution:(id)arg1;
- (void)_readIcons;
- (void)_addNoFlagsIcon:(id)arg1;
- (unsigned long long)iconsCount;
- (void)clearIcons;
- (id)iconAtIndex:(unsigned long long)arg1;
- (void)addIcon:(id)arg1;

@end
