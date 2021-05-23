/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDTextItemDisplayConfig, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItemContainer : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDTextItemDisplayConfig *_displayConf;
    NSMutableArray *_textItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayConf:1;
        unsigned int read_textItems:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayConf:1;
        unsigned int wrote_textItems:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *textItems;
@property (nonatomic, readonly) _Bool hasDisplayConf;
@property (retain, nonatomic) GEOPDTextItemDisplayConfig *displayConf;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)textItemType;

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
- (void)_readTextItems;
- (void)_addNoFlagsTextItem:(id)arg1;
- (void)_readDisplayConf;
- (unsigned long long)textItemsCount;
- (void)clearTextItems;
- (id)textItemAtIndex:(unsigned long long)arg1;
- (void)addTextItem:(id)arg1;

@end
